import pygame 
import random


pygame.init()
screen=pygame.display.set_mode((500,500))
pygame.display.set_caption("snake game")

x=30
x_axis=50
y_axis=50

fx,fy=random.randint(20,400),random.randint(20,400)

food=pygame.image.load("apple.png")
food=pygame.transform.scale(food,(30,30))

bord=pygame.Surface((496.5,50))
bord.fill((255,255,255))


scorebord=pygame.font.Font(None,50)

score=0
speed=0.2
flag=3
running =True
while running:
    screen.fill((0,0,0))
    screen.blit(bord,(2.5,2.5))
    snake=pygame.Surface((x,30))
    snake.fill("blue")

    if flag==1:
        y_axis+=speed
    elif flag==2:
        y_axis-=speed
    elif flag==3:
        x_axis+=speed
    elif flag==4:
        x_axis-=speed

    if x_axis>490:
        x_axis=0
    if x_axis<-20:
        x_axis=490
    if y_axis>490:
        y_axis=50
    if y_axis<50:
        y_axis=490


    screen.blit(food,(fx,fy))


    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            running =False
        if event.type==pygame.KEYDOWN:
            if event.key == pygame.K_DOWN and flag!=2:
                flag=1
            elif event.key == pygame.K_UP and flag!=1:
                flag=2
            elif event.key == pygame.K_RIGHT and flag!=4:
                flag=3
            elif event.key == pygame.K_LEFT and flag!=3:
                flag=4
    

    apple_rect=pygame.Rect(fx,fy,20,20)
    snake_rect=pygame.Rect(x_axis,y_axis,30,30)

    if snake_rect.colliderect(apple_rect):
        score+=1
        fx,fy=random.randint(10,400),random.randint(50,400)

    text=scorebord.render(f"Score:{score}",True,(0,0,0))
    screen.blit(text,(180,10))
    screen.blit(snake,(x_axis,y_axis))
    pygame.display.update()

pygame.quit()