#include<stdlib.h> 
#include<string.h> 
#include<stdio.h> 
#include<sys/types.h> 
#include<sys/socket.h> 
#include<netinet/in.h> 
#include<arpa/inet.h> 
#include<sys/fcntl.h> 
int main(int argc, char *argv[]) 
{ 
      int fd,sockfd, newsockfd, clilen,portno,n; 
      struct sockaddr_in serv_addr,cli_addr; 
      char buffer[4096]; 
      if(argc<2) 
      { 
              fprintf(stderr," no port\n"); 
              exit(1); 
     } 
      portno=atoi(argv[1]); 
      sockfd=socket(AF_INET, SOCK_STREAM,0); 
      if(sockfd<0) 
      error("error opening socket"); 
      bzero((char*)&serv_addr,sizeof(serv_addr)); 
      serv_addr.sin_family=AF_INET; 
      serv_addr.sin_addr.s_addr=(htonl)INADDR_ANY; 
      serv_addr.sin_port=htons(portno); 
      if(bind(sockfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr))<0) 
      perror("error binding"); 
      listen(sockfd,5) ; 
      clilen=sizeof(cli_addr); 
      printf("SERVER waiting for the CLIENT .... \n"); 
      while(1) 
      { 
              newsockfd = accept(sockfd,(struct sockaddr *)&cli_addr,&clilen); 
              if(newsockfd<0) 
              perror("error on accept"); 
              bzero(buffer,4096) ; 
             read(newsockfd,buffer,4096) ; 
            fd=open(buffer,O_RDONLY); 
            if(fd<0) 
            perror("file open error "); 
            while(1) 
            { 
                   n=read(fd,buffer,4096); 
                   if(n<=0) 
                   exit(0); 
                   write(newsockfd,buffer,n); 
                   printf("Transfer Completed\n"); 
            } 
            close(fd); 
            close(newsockfd); 
      } 
      return 0; 
} 
