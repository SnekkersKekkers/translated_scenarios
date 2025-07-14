switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030500001_05_000");
    MsgDisp("Hiiragi","Shrine visits are nice.
Should I come and pick you up?");
    MsgDisp("主人公","Is that okay with you?");
    VoicePlay("S030500001_05_010");
    MsgDisp("Hiiragi","Yeah.
I'll see you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay!
Now then, what should I wear?)");
    break ;
    case 3:
    VoicePlay("S030500001_05_020");
    MsgDisp("Hiiragi","I just got some free time.
Let's go visit the shrine then.");
    MsgDisp("主人公","Yeah!
Let's meet up then......");
    VoicePlay("S030500001_05_030");
    MsgDisp("Hiiragi","If it's okay, when you're done getting
ready, I'll pick you up.");
    MsgDisp("主人公","Eh, really?
Thank you.
I'll be ready and waiting then.");
    VoicePlay("S030500001_05_040");
    MsgDisp("Hiiragi","Understood.
See you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Okay then, what should I wear?)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030500001_05_050");
    MsgDisp("Hiiragi","Of course.
Now's the perfect time for us to go.
Let's get going.");
    MsgDisp("主人公","Yay!
Where should we meet up?");
    VoicePlay("S030500001_05_060");
    MsgDisp("Hiiragi","If you don't mind, I'll come and pick you
up.
I'll head there slowly, so don't rush.");
    MsgDisp("主人公","Sure, thank you.
Okay then, see you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Well then,
What should I wear......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
