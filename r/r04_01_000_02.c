MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("R040100002_01_000");
    MsgDisp("Kazama","Alright, I'm gonna get some food.
See you later.");
    MsgDisp("主人公","Yeah, see you.");
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("R040100002_01_010");
    MsgDisp("Kazama","I'm getting thirsty talking to you.
I'm gonna get a drink.");
    MsgDisp("主人公","Alright, see you later.");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("R040100002_01_020");
    MsgDisp("Kazama","I'll get some food and drinks.
Give me a minute.");
    MsgDisp("主人公","Got it!
See you soon.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
