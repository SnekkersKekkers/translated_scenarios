BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J010500000_05_000");
    MsgDisp("Hiiragi","Hiiragi speaking.");
    MsgDisp("主人公","Ah, it's
｛主人公苗字｝.");
    VoicePlay("J010500000_05_010");
    MsgDisp("Hiiragi","Yes.
Is there anything you need?");
    MsgDisp("主人公","Uhm, well...");
    break ;
    case 3:
    VoicePlay("J010500000_05_020");
    MsgDisp("Hiiragi","Hello, Hiiragi speaking.");
    MsgDisp("主人公","Ah, hello, it's
｛主人公苗字｝.");
    VoicePlay("J010500000_05_010");
    MsgDisp("Hiiragi","Yes.
Is something the matter?");
    MsgDisp("主人公","Uhm, well...");
    break ;
    case 4:
    case 5:
    VoicePlay("J010500000_05_040");
    MsgDisp("Hiiragi","Hello, Hiiragi speaking.");
    MsgDisp("主人公","Hello, it's
｛主人公苗字｝.");
    VoicePlay("J010500000_05_050");
    MsgDisp("Hiiragi","Oh, what a pleasant coincidence.");
    MsgDisp("主人公","Huh?");
    VoicePlay("J010500000_05_060");
    MsgDisp("Hiiragi","I found myself thinking about you
suddenly.");
    MsgDisp("主人公","That's amazing!");
    VoicePlay("J010500000_05_070");
    MsgDisp("Hiiragi","Isn't it?
So, is there anything I can do for you
today?");
    MsgDisp("主人公","Uhm, well...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
