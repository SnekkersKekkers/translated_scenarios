switch (ChPrmGet(5,6)){
    case 3:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500003_05_000");
    MsgDisp("Hiiragi","I heard you got the highest evaluation in
the joint practice with another school.
Your strength and flexibility are your
true strengths.");
    MsgDisp("主人公","Thank you, I'll practice more and get even
better!");
    MsgDisp("主人公","(I'm glad I gave it my all!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500003_05_010");
    MsgDisp("Hiiragi","Your performance was less like a
performance and more like a dance.");
    MsgDisp("主人公","Could it be that you came to see the
Rhythmic Gymnastic's club's joint
practice?");
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("X110500003_05_020");
    MsgDisp("Hiiragi","Yes, I was curious.
Your dance was overwhelming with emotion.
I'll come to see it again.");
    MsgDisp("主人公","(Yay! I was praised by ｛柊＊＊＊｝ )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
