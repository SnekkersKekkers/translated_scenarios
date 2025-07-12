BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,35,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Ah, should I mist this one a bit?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600004_06_000");
    MsgDisp("Himuro","Yeah, it doesn't look well.");
    MsgDisp("主人公","Alright, I'll check on the other
flowers and mist them too if they need it.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600004_06_010");
    MsgDisp("Himuro","…………");
    MsgDisp("主人公","Is something wrong?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I460600004_06_020");
    MsgDisp("Himuro","Nah, I just thought you were
getting a little reliable.");
    MsgDisp("主人公","Huh!
You think so?");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600004_06_030");
    MsgDisp("Himuro","Just don't get carried away.");
    MsgDisp("主人公","Okay!");
    MsgDisp("主人公","(He praised me!
Alright, let's keep doing our best!)");
    break ;
    case 4:
    case 5:
    VoicePlay("I460600004_47_000");
    MsgDisp("Woman Customer","Excuse me.
Which flower is best for a sick visit?");
    MsgDisp("主人公","Let's see.
How about this arrangement? The pink and
orange is sure to cheer them up.");
    VoicePlay("I460600004_47_010");
    MsgDisp("Woman Customer","Waah, pretty.
Then, I'll take this, please.");
    MsgDisp("主人公","Okay!");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,35,3,0,0,#1,#1,0,0);
    VoicePlay("I460600004_06_040");
    MsgDisp("Himuro","Your customer service is on point.
Perfect choice.");
    MsgDisp("主人公","Really?
If you mean it, I'm happy.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    ChCheek(6,7);
    VoicePlay("I460600004_06_050");
    MsgDisp("Himuro","I don't bother with flattery.
Just accept the compliment.");
    MsgDisp("主人公","Okay!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,0);
    VoicePlay("I460600004_06_060");
    MsgDisp("Himuro","I'll have to work hard
to not lose to you.");
    MsgDisp("主人公","(He praised me!
Alright, let's work even harder!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
