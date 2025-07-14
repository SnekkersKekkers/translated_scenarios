BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,35,0,0,0,#1,#1,0,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,8);
    VoicePlay("I460600002_06_000");
    MsgDisp("Himuro","......making arrangements is hard.");
    MsgDisp("主人公","Are you making flower baskets?");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600002_06_010");
    MsgDisp("Himuro","Yeah.
......My sense is being tested.");
    MsgDisp("主人公","Wouldn't it be easier if you decide on a
flower as the center?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600002_06_020");
    MsgDisp("Himuro","......I see.
I'll use that idea.");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("I460600002_06_030");
    MsgDisp("Himuro","Alright, done.");
    MsgDisp("主人公","Ah, it's really pretty......!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("I460600002_06_040");
    MsgDisp("Himuro","Since I used your idea.
......I'm thankful, I guess.");
    MsgDisp("主人公","(I helped ｛氷室＊＊｝!
I'm glad.)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("I460600002_06_050");
    MsgDisp("Himuro","That mini bouquet is nice.");
    MsgDisp("主人公","Really∋");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600002_06_060");
    MsgDisp("Himuro","What's the point in
lying about that?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600002_06_070");
    MsgDisp("Himuro","First, you were asked to do this because
you have good sense, right?");
    MsgDisp("主人公","I guess so......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600002_06_080");
    MsgDisp("Himuro","This might be your calling, huh?
I think it suits you.");
    MsgDisp("主人公","Really? Then maybe I'll open a flower shop
in the future.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0,1);
    VoicePlay("I460600002_06_090");
    MsgDisp("Himuro","......How simple.");
    MsgDisp("主人公","(｛氷室＊＊｝ praised me!
Alright, let's work even harder!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
