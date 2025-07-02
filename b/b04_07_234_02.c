BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,2,2,3,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723402_07_000");
MsgDisp("Mikage","I'm starting to understand
the appeal of the tea cups.");
MsgSel("It has a cute vibe, doesn't it?","It's the contrast","Are you challenging your limits?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040723402_07_010");
    MsgDisp("Mikage","That's exactly it. All I can see
is you and the cup. I only see
the cute elements.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040723402_07_020");
    MsgDisp("Mikage","It's true that if you let your guard 
down because of the atmosphere,
it could ruin your day.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040723402_07_030");
        MsgDisp("Mikage","Is it really necessary to break through
my limits with this?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040723402_07_040");
        MsgDisp("Mikage","The most important thing is that
you look like you're having fun.");
        MsgDisp("主人公","Are you not having fun, Sensei?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040723402_07_050");
        MsgDisp("Mikage","I am. I've always wanted 
to try the teacups.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,4);
        ChEyeOpenLevel(7,8);
        VoicePlay("B040723402_07_060");
        MsgDisp("Mikage","It's hard to ride this unless someone 
pulls you to it like you do.");
        MsgDisp("主人公","Is that so?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,1);
        ChEyeOpenLevel(7,10);
        VoicePlay("B040723402_07_070");
        MsgDisp("Mikage","Yeah.
Any guy riding this should be
grateful to the girl.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040723402_07_080");
        MsgDisp("Mikage","Thanks to you, I was able to experience 
embarrassment and the trials 
of spinning around.");
        MsgDisp("主人公","Umm, is that it's charm?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        ChEyeOpenLevel(7,7);
        VoicePlay("B040723402_07_090");
        MsgDisp("Mikage","The charm is being able to see
the other person's various faces.
To go from a prim look 
to a full-on frolic");
        MsgDisp("主人公","Ugh... it's kinda embarassing.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040723402_07_100");
        MsgDisp("Mikage","That being said, I don't have the time to
look away either, so I have no choice but
to observe, right?");
        MsgDisp("主人公","(When you ride the tea cups, 
you'll be observed a lot...)");
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
