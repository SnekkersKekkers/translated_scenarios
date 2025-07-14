BGOpen("fp210",0);
ChLayout(1);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ScrFadeIn(0);
VoicePlay("B040108102_01_000");
MsgDisp("Kazama","When I'm looking at the cherry blossoms,
I'm reminded of all kinds of things.");
MsgSel("Elementary school entrance ceremony?","Are there cherry blossoms in England?","Haba High entrance ceremony?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108102_01_010");
        MsgDisp("Kazama","Yeah, I doubt it.
You absolutely don't remember something
like that.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,2);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108102_01_020");
        MsgDisp("Kazama","Just what exactly am I supposed to feel
about you saying that?");
        MsgDisp("主人公","Huh?");
        ChMouth(1,1);
        ChMotion(1,0,1);
        VoicePlay("B040108102_01_030");
        MsgDisp("Kazama","There's not a chance that you remember
something from that long ago.");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040108102_01_040");
        MsgDisp("Kazama","Haah. My bad.
That's just so you, too.");
        MsgDisp("主人公","I'm sorry.
I wasn't really thinking...");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040108102_01_050");
        MsgDisp("Kazama","I said it was fine.
But you know, I remember.");
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040108102_01_060");
        MsgDisp("Kazama","You were just a scared, timid little kid.
And from the day on that we were in the
same class, we always went home together.");
        MsgDisp("主人公","Yeah. You were always
cheering me up.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0,1);
        VoicePlay("B040108102_01_070");
        MsgDisp("Kazama","Ooh, so you do remember a thing or two?
And I think it was zero.");
        MsgDisp("主人公","Hey, jeez.
But, thank you.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108102_01_080");
        MsgDisp("Kazama","Oh-hoh. That honesty is nice. A proper
thank you. From here on out, thank me
everyday.");
        MsgDisp("主人公","(｛風真＊＊｝, you've cared about me for
so long now...
It makes me happy.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("B040108102_01_090");
    MsgDisp("Kazama","Yeah, Long has quite a few cherry blossoms
around.
I always liked the ones I saw there, too.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    ChCheek(1,5);
    VoicePlay("B040108102_01_100");
    MsgDisp("Kazama","Right? We were in the same school, same
class. It was almost too good to be true.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    ChCheek(1,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
