ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    ScrFadeIn(0);
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("H380500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.");
    ChEye(5,4);
    VoicePlay("H380500000_05_010");
    MsgDisp("Hiiragi","......I see, how exquisite.");
    MsgDisp("主人公","Huh∋");
    ChEye(5,3);
    VoicePlay("H380500000_05_020");
    MsgDisp("Hiiragi","A beauty, and behind it, strength.
That is how your confidence makes
you appear.");
    MsgDisp("主人公","Um......
I'm happy, but you're making me
a little shy.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("H380500000_05_030");
    MsgDisp("Hiiragi","It seems that I don't need to worry
about you. You are the same as you
always are.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("H380500000_05_040");
    MsgDisp("Hiiragi","Go forth.
As a spectator, I'll let myself enjoy
watching.");
    MsgDisp("主人公","(Yeah!
......Alright, let's do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
