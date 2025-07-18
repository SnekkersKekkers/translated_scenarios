ChEye(8,4);
ChMouth(8,0);
ChMotion(8,2);
ChCheek(8,4);
VoicePlay("B060800013_08_000");
MsgDisp("Shirahane","...Hey.
I wanna stay with ya a bit longer...won't
ya accompany me?");
MsgSel("Yeah, that's fine.","Sorry, today is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,3);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,3);
    ChEyeOpenLevel(8,0);
    ChCheek(8,7);
    VoicePlay("B060800013_08_010");
    MsgDisp("Shirahane","Hehe, yay!
Let's go.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0);
    ChCheek(8,0);
    break ;
    case 1:
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0);
    VoicePlay("B060800013_08_020");
    MsgDisp("Shirahane","I see...
Well, I'll see ya.
Be careful on your way home, 'kay?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(I wonder if it was bad for me to turn him
down?)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
