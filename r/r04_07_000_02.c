MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(7,-1);
ChMouthOpenLevel(7,-1);
ChCheek(7,0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4,1);
    VoicePlay("R040700002_07_000");
    MsgDisp("Mikage","Oh, it's the Principal and Vice
Principal. I should say hello...
properly.");
    MsgDisp("主人公","Umm, sure, go ahead.");
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ScrFadeIn(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("R040700002_07_010");
    MsgDisp("Mikage","Sigh, school is hard. After all,
I am a teacher.");
    MsgDisp("主人公","Huh?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2,1);
    VoicePlay("R040700002_07_020");
    MsgDisp("Mikage","I'm gonna go say hi to the
Principal and Vice Principal.");
    MsgDisp("主人公","Sure, see you later.");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ScrFadeIn(0);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2,1);
    VoicePlay("R040700002_07_030");
    MsgDisp("Mikage","Phew... It's not good to see
Beppin-san all by myself. I'm gonna
go say hi to the higher ups.");
    MsgDisp("主人公","Sure, see you later.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
