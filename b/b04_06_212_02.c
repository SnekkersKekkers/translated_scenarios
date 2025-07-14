BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,3);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040621202_06_000");
MsgDisp("Himuro","Should I get that plushie for you?");
MsgSel("Is that okay? Yay!","I would prefer something bigger!","Actually, I'll gift it to you as a present, ｛氷室＊＊｝!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,5);
    VoicePlay("B040621202_06_010");
    MsgDisp("Himuro","Are you that happy with it?
...Well, I don't mind.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040621202_06_020");
    MsgDisp("Himuro","You're greedy huh.");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040621202_06_030");
        MsgDisp("Himuro","No, there's no need.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,3);
        ChMouth(6,3);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040621202_06_040");
        MsgDisp("Himuro","...I don't really need it.
But since we're here, I'll gratefully
receive it.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040621202_06_050");
        MsgDisp("Himuro","Ah, it's not like I particularly like
stuffed animals or anything.
Just to be sure.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040621202_06_060");
        MsgDisp("Himuro","I'm just happy to
know you care.");
        MsgDisp("主人公","Hehe, then which
one do you want?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040621202_06_070");
        MsgDisp("Himuro","You choose.
I'm fine with any.");
        MsgDisp("主人公","Then, that light blue sea otter.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040621202_06_080");
        MsgDisp("Himuro","Eh... huh?");
        MsgDisp("主人公","Yeah, for some reason it looks like
｛氷室＊＊｝ I guess?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChEyeOpenLevel(6,7);
        VoicePlay("B040621202_06_090");
        MsgDisp("Himuro","Isn't he kind of frowning?
Is my gaze that mean?");
        MsgDisp("主人公","Umm...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040621202_06_100");
        MsgDisp("Himuro","And he seems kind of cheeky?
He gives of the vibe that he rejects
everything.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040621202_06_110");
        MsgDisp("Himuro","Is that not 
different to my image?");
        MsgDisp("主人公","(...I-It's hard to answer.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
