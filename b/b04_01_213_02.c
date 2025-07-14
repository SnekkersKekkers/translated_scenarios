BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040121302_01_000");
MsgDisp("Kazama","For some reason the dogs always go up to
you.");
MsgSel("Maybe I smell of something?","Apparently animals can tell the difference between good and bad people","Maybe it's cause I'm holding food?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    VoicePlay("B040121302_01_010");
    MsgDisp("Kazama","You always have a, how should I put it...
a fluffy smell.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040121302_01_020");
    MsgDisp("Kazama","Oi, what does that mean?
...Well in comparison to you anyways, it
doesn't look like I can win.");
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
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040121302_01_030");
        MsgDisp("Kazama","I was holding the same food too...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,1);
        VoicePlay("B040121302_01_040");
        MsgDisp("Kazama","That big dog seemed to lick your hand more
than it wanted the food.");
        MsgDisp("主人公","Is that so.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040121302_01_050");
        MsgDisp("Kazama","No mistake about it. I saw it after all.
It was kinda weird. Maybe there was a
person inside?");
        MsgDisp("主人公","Hehe, that can't be true.");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040121302_01_060");
        MsgDisp("Kazama","I know that, but I don't like that male
dog.");
        MsgDisp("主人公","It was a dog, so it can't be helped.
And, she was a girl?");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040121302_01_070");
        MsgDisp("Kazama","Oi, how do you know that?
Don't just say stuff like that casually?");
        MsgDisp("主人公","Her name tag said Catherine.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,4);
        VoicePlay("B040121302_01_080");
        MsgDisp("Kazama","Eh... i-is that so? Well, I guess that
can't be helped");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040121302_01_090");
        MsgDisp("Kazama","Still, it's kind of annoying when she just
casually licked you...");
        MsgDisp("主人公","(｛風真＊＊｝, really is a neat freak
huh?)");
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
