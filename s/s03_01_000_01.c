switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030100001_01_000");
    MsgDisp("Kazama","Right.
I need things to pray for besides my
health.");
    MsgDisp("主人公","There's academics, business,
love......");
    VoicePlay("S030100001_01_010");
    MsgDisp("Kazama","I'm coming to pick you up.
So think about that.
See you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He's coming to pick me up.
Alright, what to wear...)");
    break ;
    case 3:
    VoicePlay("S030100001_01_020");
    MsgDisp("Kazama","ＯＫ.
How the rest of the year goes depends on
today.");
    MsgDisp("主人公","Yep!
Okay, let's meet up at......");
    VoicePlay("S030100001_01_030");
    MsgDisp("Kazama","Wait. I'm coming to get you.
Get ready, okay?
See you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I should get ready.
Hmm, what to wear...)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030100001_01_040");
    MsgDisp("Kazama","Yeah, I'll be right there.");
    MsgDisp("主人公","Oh, are you coming to pick me up?");
    VoicePlay("S030100001_01_050");
    MsgDisp("Kazama","Of course.
I can't let you walk around by yourself
dressed like that.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(\"Dressed like that\"?
......He might be anticipating something.
Okay, what to wear?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
