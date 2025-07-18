BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040601102_06_000");
MsgDisp("Himuro","This is the same old course.");
MsgSel("Are you tired of it?","I like it here","It's nice for us to have a \"same old\".");
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
        ChMotion(6,0);
        VoicePlay("B040601102_06_010");
        MsgDisp("Himuro","If I'm honest, yeah.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040601102_06_020");
        MsgDisp("Himuro","Strangely enough, not really.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040601102_06_030");
        MsgDisp("Himuro","Even though it's not like it's a place I
especially like, I've come here three
times.");
        MsgDisp("主人公","Uh...
I'm sorry.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,3);
        VoicePlay("B040601102_06_040");
        MsgDisp("Himuro","I'm not blaming you particularly.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040601102_06_050");
        MsgDisp("Himuro","...Well, it's fun when you're with someone
who has a new reaction each time right?");
        MsgDisp("主人公","Eh...
That——");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040601102_06_060");
        MsgDisp("Himuro","Don't make me say that.
Sort of nonsense.");
        MsgDisp("主人公","Hehe!");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,3);
        ChCheek(6,0);
        VoicePlay("B040601102_06_070");
        MsgDisp("Himuro","...Well, the way your nose stretches out
when you smile is probably more worth
seeing than this place.");
        MsgDisp("主人公","∋ It doesn't stretch out!");
        ChEye(6,3);
        ChMouth(6,3);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040601102_06_080");
        MsgDisp("Himuro","Haha!
I really don't get tired of you.");
        MsgDisp("主人公","(I'm a little frustrated...)");
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
    VoicePlay("B040601102_06_090");
    MsgDisp("Himuro","Hmmm.
Well, it's not that uncomfortable.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040601102_06_100");
    MsgDisp("Himuro","Well...its's not bad but, would you really
word it like that?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
