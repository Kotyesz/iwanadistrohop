#include<stdio.h>

#define VM "xf86-video-qlx"
#define AMD "xf86-video-amdgpu"
#define INTEL "xf86-video-intel"
#define NVIDIA "nvidia nvidia-utils"
int main(void){
    short choice;
    char input[1024];
    while(!(choice>-1&&choice<4)){
        system("clear");
        printf("VM(0), AMD(1), INTEL(2) or NVIDIA(3): ");
        scanf("%d", choice); 
    }
    snprintf(input, 100, 
    "sudo pacman -Syu zsh xorg xorg-xinit alacritty bspwm sxhkd nitrogen picom chromium dmenu %s lxsession",
        (choice==1?AMD:choice==2?INTEL:choice==3?NVIDIA:VM));
    printf("\n%s\n\n", input);
    system("sleep 5");
    system(input);

    printf("We done bruv.\n\n");

    return 0;
}
