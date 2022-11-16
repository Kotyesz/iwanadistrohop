#include<stdio.h>
int main(void){
    char input[100], *drivers[]={
        "xf86-video-qlx",
        "xf86-video-amdgpu",
        "xf86-video-intel",
        "nvidia nvidia-utils"
    };
    while(!(input[0]>0x29&&input[0]<0x34)){
        printf("VM(0), AMD(1), INTEL(2) or NVIDIA(3): ");
        scanf("%c", &input[0]); 
    }
    snprintf(input, 100, 
    "sudo pacman -Syu xorg xorg-xinit alacritty bspwm sxhkd nitrogen picom chromium dmenu %s lxsession"
    , drivers[0x30-input[0]]);
    system(input);
    return 0;
}
