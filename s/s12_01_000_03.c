switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","｛風真＊＊｝, thanks for walking
me back.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100003_01_000");
    MsgDisp("Kazama","Oh, we're here.");
    MsgDisp("主人公","Yep.
You wanted to keep walking, didn't you?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("S120100003_01_011");
    MsgDisp("Kazama","Ahh, time passes way too quickly when
we're together.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("S120100003_01_020");
    MsgDisp("Kazama","If you're not careful, the whole year
might just pass by.");
    MsgDisp("主人公","Hehe, it's still New Years, though.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100003_01_030");
    MsgDisp("Kazama","That's true.
But better safe than sorry.
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Hehe, I hope ｛風真＊＊｝ and
I get along well this year!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Thanks for taking me.
If you're ready, you can leave now?");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,1);
    VoicePlay("S120100003_01_050");
    MsgDisp("Kazama","I'm leaving...... but it doesn't matter.
Grandpa is waiting for me.");
    MsgDisp("主人公","You have to work?");
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,4);
    ChMouth(1,3);
    VoicePlay("S120100003_01_060");
    MsgDisp("Kazama","The end of year inventory review isn't
finished yet. It's tradition. He can't do
it alone.");
    MsgDisp("主人公","Maybe I could help as well.");
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100003_01_070");
    MsgDisp("Kazama","Hm, but I can't make you clean on New
Years.
Thanks anyway.");
    MsgDisp("主人公","I don't mind.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChCheek(1,5);
    VoicePlay("S120100003_01_080");
    MsgDisp("Kazama","I do.
You're dressed so beautifully right now.
Thanks for that.");
    MsgDisp("主人公","(｛風真＊＊｝ said I'm dressed beautifully,
I'm so happy he said that......
This year will be another good year.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
