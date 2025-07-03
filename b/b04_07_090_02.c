BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040709002_07_000");
MsgDisp("Mikage","This is also a laboratory
for genetic modification.
Let's take a peek.");
MsgSel("Natural is best.","Like square watermelons?","Like disease-resistant rice?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0,1);
        VoicePlay("B040709002_07_010");
        MsgDisp("Mikage","Unfortunately for you, 
The fruits and vegetables you guys
eat have all been modified for 
the most part.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040709002_07_020");
        MsgDisp("Mikage","Thanks to the research and improvements of
our predecessors, the delicious fruits and
vegetables of today exist.");
        MsgDisp("主人公","That's right!");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        VoicePlay("B040709002_07_030");
        MsgDisp("Mikage","Alright, alright.
Just now, you've also just transformed.");
        MsgDisp("主人公","Eh?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040709002_07_040");
        MsgDisp("Mikage","High schools are just like this
laboratory. No one knows how giving
students various stimuli will affect them.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040709002_07_050");
        MsgDisp("Mikage","But you know, 
isn't that change to various stimuli
just growth?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,4);
        VoicePlay("B040709002_07_060");
        MsgDisp("Mikage","...Wow, that's a rare example of
when I said something good.");
        MsgDisp("主人公","Hehe.
｛御影＊＊｝, I want to grow up being
stimulated in all sorts of ways.");
        ChEye(7,0);
        ChMouth(7,1);
        ChMotion(7,1);
        VoicePlay("B040709002_07_070");
        MsgDisp("Mikage","...It's the opposite.");
        MsgDisp("主人公","Eh?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040709002_07_080");
        MsgDisp("Mikage","You know, I didn't get any stimulus during
my high school years, when I should've be
growing. That's why I'm getting it from
you guys now...");
        MsgDisp("主人公","(｛御影＊＊｝'s time at high school...')");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040709002_07_090");
    MsgDisp("Mikage","They just put it in a
box for that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040709002_07_100");
    MsgDisp("Mikage","Like that.
Rice is a great example of that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
