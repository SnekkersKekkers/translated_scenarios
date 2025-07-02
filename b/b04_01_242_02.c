BGOpen("tr520",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040124202_01_000");
MsgDisp("Kazama","The orange of the campfire is so calming.");
MsgSel("I could look at it forever","The campfire makes anything more delicious","Let's make sure we deal with the fire properly after");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040124202_01_010");
    MsgDisp("Kazama","Apparently sitting around
the same fire strengthens bonds. Well,
we don't need that kind of thing,
though.");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,-1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040124202_01_020");
    MsgDisp("Kazama","There it is.
Everything really is related to
food for you, isn't it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040124202_01_030");
        MsgDisp("Kazama","Well, that's true, though...
don't fan out the flames of 
our conversation...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040124202_01_040");
        MsgDisp("Kazama","You have more to add to that right?
Like  when we gaze at the 
fire together...");
        MsgDisp("主人公","Gazing?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040124202_01_050");
        MsgDisp("Kazama","Try imagining 
a flickering fire.");
        MsgDisp("主人公","Eh?
Y-yeah?");
        ScrFadeOut(3,30);
        Wait(40,1);
        VoicePlay("B040124202_01_060");
        MsgDisp("Kazama","Alright, then what do 
you see beyond that fire?");
        MsgDisp("主人公","Ummm...｛風真＊＊｝?");
        VoicePlay("B040124202_01_070");
        MsgDisp("Kazama","Right.
It's just me and you warming ourselves
by the fire. What do you think of that?");
        MsgDisp("主人公","Yeah, I feel kinda, 
overwhelmingly at peace?");
        VoicePlay("B040124202_01_080");
        MsgDisp("Kazama","Alright!");
        SEPlay("EV_SE_524",0,1);
        SEWait();
        MsgDisp("主人公","Eh?");
        ChEye(1,4);
        ChMouth(1,3);
        ChCheek(1,5);
        ScrFadeIn(4);
        ChMotion(1,0,1);
        VoicePlay("B040124202_01_090");
        MsgDisp("Kazama","Apparently it's called the bonfire effect.
It makes you want to have deep
conversations that you normally couldn't.
How about you?");
        MsgDisp("主人公","(｛風真＊＊｝, you're like a hypnotist...)");
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
