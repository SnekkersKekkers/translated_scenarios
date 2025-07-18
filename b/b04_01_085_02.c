BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040108502_01_000");
MsgDisp("Kazama","Something about this place makes me want
to come here regularly.");
MsgSel("It's charming in every season, right?","｛風真＊＊｝ likes the fireflies' home, huh?","Maybe something is guiding you here");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040108502_01_010");
    MsgDisp("Kazama","Yeah it is.
I fall in love with each season every time
I visit.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040108502_01_020");
    MsgDisp("Kazama","I guess I do.
It feels like the perfect place for us to
just talk about nothing in particular.");
    MsgDispSksp(1,8);
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
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108502_01_030");
        MsgDisp("Kazama","Hey, you don't happen to be hearing
anything, do you?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040108502_01_040");
        MsgDisp("Kazama","Wait a minute.
There's no way, but can you hear that?");
        MsgDisp("主人公","Huh?
Hear what?");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040108502_01_050");
        MsgDisp("Kazama","You know, my voice?");
        MsgDisp("主人公","Yeah, I can hear you.");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108502_01_060");
        MsgDisp("Kazama","No, I mean something different. Obviously
you can't hear the voice like this. I'm
not trying to check your hearing.");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040108502_01_070");
        MsgDisp("Kazama","See, you can hear your partner's inner
voice here, right?");
        MsgDisp("主人公","...No.
...I don't hear anything?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,4);
        VoicePlay("B040108502_01_080");
        MsgDisp("Kazama","That's good, then.
After all, it wouldn't be fair if just one
of us could hear it.");
        ChEye(1,0);
        ChMouth(1,4);
        ChEyeOpenLevel(1,7);
        ChMouthOpenLevel(1,2);
        VoicePlay("B040108502_01_090");
        MsgDisp("Kazama","...Let's always be together from here on
out.");
        ChMouth(1,2);
        MsgDisp("主人公","Whoa!
｛風真＊＊｝, I think I just
heard it!");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040108502_01_100");
        MsgDisp("Kazama","Haha, my bad.
Well, at least I know you aren't lying.");
        MsgDisp("主人公","Huh?
You mean what just happened was...");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040108502_01_110");
        MsgDisp("Kazama","Me throwing my voice.
England has a lot of ventriloquist dolls,
so I learned how to do it a little.");
        MsgDisp("主人公","Ugh, that really shocked me.");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040108502_01_120");
        MsgDisp("Kazama","Sorry, but that was the greatest reaction
to get.");
        MsgDisp("主人公","(But earlier, he said that we'd always be
together, right?)");
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
