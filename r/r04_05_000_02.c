MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ScrFadeIn(0);
    ChMotion(5,4);
    VoicePlay("R040500002_05_000");
    MsgDisp("Hiiragi","The guest of honor is calling me.
Well then, if you'll excuse me.");
    MsgDisp("主人公","Okay.
See you later.");
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ScrFadeIn(0);
    ChMotion(5,4);
    VoicePlay("R040500002_05_010");
    MsgDisp("Hiiragi","Yeah, the ambiance here feels nice.
I can feel that everyone is having
fun... Ah.");
    MsgDisp("主人公","Is that the guest of honor?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("R040500002_05_020");
    MsgDisp("Hiiragi","Yeah, it's my job.
Well then, please enjoy this party.");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ScrFadeIn(0);
    ChEye(5,4);
    VoicePlay("R040500002_05_030");
    MsgDisp("Hiiragi","I would love to have you for myself, 
but I'm afraid of what would happen if 
I do so, so I'll see you soon again soon.");
    MsgDisp("主人公","Yeah, see you!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
