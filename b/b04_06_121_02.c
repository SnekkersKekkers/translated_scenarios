MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040612102_06_000");
MsgDisp("Himuro","Are you interested in that mug?");
MsgSel("I want to match with ｛氷室＊＊｝.","I'm just looking.","I'm super interested.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040612102_06_010");
        MsgDisp("Himuro","If you're buying it, just buy your own
one.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040612102_06_020");
        MsgDisp("Himuro","...Then, I'll buy it for you.");
        MsgDisp("主人公","Eh?
It's fine!
I'll but it.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040612102_06_030");
        MsgDisp("Himuro","Is that because you don't want a present
from me?");
        MsgDisp("主人公","It's not like that though...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040612102_06_040");
        MsgDisp("Himuro","Then, could you just accept it without
complaint?");
        MsgDisp("主人公","Then, I'll buy ｛氷室＊＊｝'s one?
Let's buy each other presents.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,0);
        VoicePlay("B040612102_06_050");
        MsgDisp("Himuro","Eh...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040612102_06_060");
        MsgDisp("Himuro","...If you want.");
        MsgClose();
        ScrFadeOut(0);
        ChClose(6);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        ScrFadeIn(0);
        MsgDisp("主人公","Thank you, ｛氷室＊＊｝.
I'll cherish it.");
        ChOpen(6,253,0,0,0,#1,#1,0,0);
        VoicePlay("B040612102_06_070");
        MsgDisp("Himuro","Yeah, do that.
Since we went to the trouble of buying
presents for each other.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040612102_06_080");
        MsgDisp("Himuro","And it's a reminder of today... so I'll
also cherish it.");
        MsgDisp("主人公","Yeah...!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040612102_06_090");
    MsgDisp("Himuro","Ah, right.
Then, let's go somewhere else.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040612102_06_100");
    MsgDisp("Himuro","Then why no buy it?
It's fate you came across it here.
And above all else, it's perfect for you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
