MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040623602_06_000");
MsgDisp("Himuro","The last time I came here,
the theme was completely different.");
MsgSel("I wonder how it'll be in 10 years?","I want to see little｛氷室＊＊｝","What theme was it?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623602_06_010");
        MsgDisp("Himuro","I was talking about 
a shorter timeframe.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623602_06_020");
        MsgDisp("Himuro","The theme will probably change, 
and we will have changed as well.");
        MsgDisp("主人公","Us too?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623602_06_030");
        MsgDisp("Himuro","Of course.
It's 10 years into the future?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623602_06_040");
        MsgDisp("Himuro","We'll have graduated.
And there's a chance
we'll have jobs too.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623602_06_050");
        MsgDisp("Himuro","My relationship with 
you may have changed too.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040623602_06_060");
        MsgDisp("Himuro","...No, I'll be troubled
if it hasn't changed.");
        MsgDisp("主人公","Why would 
that be a problem?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0,1);
        VoicePlay("B040623602_06_070");
        MsgDisp("Himuro","Because I'll have to realize my own
cowardliness and pathetic nature.
Please forgive me for that.");
        MsgDisp("主人公","Umm.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,1);
        VoicePlay("B040623602_06_080");
        MsgDisp("Himuro","It's fine if you don't understand.
But... I hope you're looking 
forward to it.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040623602_06_090");
        MsgDisp("Himuro","For our relationship to change, 
in a good way in the future.");
        MsgDisp("主人公","...Yeah, got it!");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,3);
        VoicePlay("B040623602_06_100");
        MsgDisp("Himuro","Thank you.
I feel like it can change.");
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
    VoicePlay("B040623602_06_110");
    MsgDisp("Himuro","It doesn't matter 
who it is, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623602_06_120");
    MsgDisp("Himuro","The theme was futuristic Sci-fi.
I quite liked it though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
