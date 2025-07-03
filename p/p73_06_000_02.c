BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're displaying wedding
dresses. This is my last one... I have to
make it a success!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,3,0,0,-1,-1,0,0);
    VoicePlay("P730600002_06_000");
    MsgDisp("Himuro","It's amazing huh. To think you can
handmake even such a thing.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600002_06_010");
    MsgDisp("Himuro","Is that a wedding dress?");
    MsgDisp("主人公","Yeah, how does it look?");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,1);
    VoicePlay("P730600002_06_020");
    MsgDisp("Himuro","Even if you don't hear it from me,
you already know it.
Walk proudly, okay?");
    MsgDisp("主人公","Yeah...!");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("P730600002_06_030");
    MsgDisp("Himuro","I feel a bit boastful.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("P730600002_06_040");
    MsgDisp("Himuro","To think I know someone like you
with this much talent.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600002_06_050");
    MsgDisp("Himuro","Isn't it starting?");
    MsgDisp("主人公","Yeah, I'm off.");
    MsgDisp("主人公","(This is my last big stage...
Alrーight, let's do it!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're displaying wedding
dresses. This is my last cultural
festival... I have to make it a success!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P730600002_06_060");
    MsgDisp("Himuro","Ah...");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Did you come to watch?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("P730600002_06_070");
    MsgDisp("Himuro","...Yeah.");
    MsgDisp("主人公","This year
I made a wedding dress.
How does it look?");
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("P730600002_06_080");
    MsgDisp("Himuro","How does it look, you say.... To be
honest, I'm completely not interested.");
    MsgDisp("主人公","Ehhh∋");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("P730600002_06_090");
    MsgDisp("Himuro","I... didn't want to see it yet...");
    MsgDisp("主人公","(Yet...?)");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting...
Then, I'm off, okay?");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChCheek(6,0);
    VoicePlay("P730600002_06_100");
    MsgDisp("Himuro","...What's this.
This feels like I'm sending off a bride...");
    MsgDisp("主人公","｛氷室＊＊｝...?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("P730600002_06_110");
    MsgDisp("Himuro","It's nothing.
...I'll be waiting from here.");
    MsgDisp("主人公","(｛氷室＊＊｝, what's wrong?
But this is my last stage, 
so let's carefully follow this through!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
