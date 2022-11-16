#include<stdio.h>
int main(void){
    short choice;
    char input[1024], *drivers[]={
        "xf86-video-qlx",
        "xf86-video-amdgpu",
        "xf86-video-intel",
        "nvidia nvidia-utils"
    };
    while(!(choice>-1&&choice<4)){
        system("clear");
        printf("VM(0), AMD(1), INTEL(2) or NVIDIA(3): ");
        scanf("%d", choice); 
    }
    snprintf(input, 100, 
    "sudo pacman -Syu zsh xorg xorg-xinit alacritty bspwm sxhkd nitrogen picom chromium dmenu %s lxsession",
     drivers[choice]);
    printf("\n%s\n\n", input);
    system("sleep 5");
    system(input);

    printf("We done bruv.\n\n");

    return 0;
}
