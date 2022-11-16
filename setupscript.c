#include<stdio.h>
int main(void){
    char input[100], *drivers[]={
        "xf86-video-qlx",
        "xf86-video-amdgpu",
        "xf86-video-intel",
        "nvidia nvidia-utils"
    };
    while(!(input[0]>0x29&&input[0]<0x34)){
        system("clear");
        printf("VM(0), AMD(1), INTEL(2) or NVIDIA(3): ");
        scanf("%c", &input[0]); 
    }
    snprintf(input, 100, 
    "sudo pacman -Syu zsh xorg xorg-xinit alacritty bspwm sxhkd nitrogen picom chromium dmenu %s lxsession",
     drivers[0x30-input[0]]);
    printf("\n%s\n\n", input);
    system("sleep 5");
    system(input);

    printf("We done bruv.\n\n");

    return 0;
}
