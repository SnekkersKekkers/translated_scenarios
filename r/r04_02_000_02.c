MsgClose();
ScrFadeOut(0);
ChEye(2,0);
ChMouth(2,0);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ScrFadeIn(0);
    VoicePlay("R040200002_39_000");
    MsgDisp("Male Student","Heey, Sassa!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R040200002_02_000");
    MsgDisp("Sassa","Hey. Sorry.
Well, I'll see you later.");
    MsgDisp("主人公","Yeah, see you!");
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,2);
    ScrFadeIn(0);
    VoicePlay("R040200002_02_010");
    MsgDisp("Sassa","Woah, a new dish is out!
I'm gonna go check it out.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("R040200002_02_020");
    MsgDisp("Sassa","I'll get some for you.");
    MsgDisp("主人公","Yeah, thank you.");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ScrFadeIn(0);
    VoicePlay("R040200002_39_010");
    MsgDisp("Male Student","Heey, Sassa!
Isn't the food here amazing?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("R040200002_02_030");
    MsgDisp("Sassa","............");
    MsgDisp("主人公","Oh, ｛颯砂＊＊｝? Weren't you
looking forward to the food here?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("R040200002_02_040");
    MsgDisp("Sassa","It's the 2nd main priority.");
    MsgDisp("主人公","So you're not gonna go ahead
and eat?");
    ChEye(2,5);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("R040200002_02_050");
    MsgDisp("Sassa","I am, just give me
a little bit!");
    MsgDisp("主人公","Hehe, take your time.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,2);
    VoicePlay("R040200002_02_060");
    MsgDisp("Sassa","I'll get you a big serving!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
