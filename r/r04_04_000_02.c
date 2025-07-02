MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
MsgClose();
ScrFadeOut(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChLayout(1);
    ChNanaType(-1);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("R040400002_04_000");
    MsgDisp("Nanatsumori","Ah, the cake buffet is here.
See ya.");
    MsgDisp("主人公","Yeah, see you later.");
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChLayout(1);
    ChNanaType(-1);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("R040400002_04_010");
    MsgDisp("Nanatsumori","I'm going to the cake buffet.
You should try it, it's delicious.");
    MsgDisp("主人公","Sure.
Thank you!");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChLayout(1);
    ChNanaType(-1);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("R040400002_04_020");
    MsgDisp("Nanatsumori","Ah...... 
The cake buffet is calling me.
May I go?");
    MsgDisp("主人公","Hehe, go ahead!");
    ChEye(4,4);
    ChMouth(4,3);
    VoicePlay("R040400002_04_030");
    MsgDisp("Nanatsumori","......Here I go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
