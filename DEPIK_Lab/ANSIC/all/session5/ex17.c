
typedef struct bookInfo_s
{
  int bookId;
  char title[40];
  char author[20];
}bookInfo_t;
void getBookInfo(bookInfo_t *pBi)
{
  printf("Enter book Id:");	
  scanf("%d",&pBi->bookId);	
  printf("Enter title:");	
  scanf("%s",pBi->title);	
  printf("Enter book author:");	
  scanf("%s",pBi->author);
}  
void printBookInfo_t(bookInfo_t *pBi)
{
  printf("book id=%d\n",pBi->bookId);	
  printf("book title=%s\n",pBi->title);	
  printf("book author=%s\n",pBi->author);	
}
main()
{
  bookInfo_t *pBi;
  pBi=(bookInfo_t *)malloc(sizeof(bookInfo_t));	
  getBookInfo(pBi);
  printBookInfo_t(pBi); 
}  
