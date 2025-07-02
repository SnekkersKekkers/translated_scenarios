MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040112102_01_000");
MsgDisp("Kazama","Alright, this is the perfect place
to check your fashion sense every
once in awhile.");
MsgSel("Then I'll pick out some clothes for ｛風真＊＊｝▼.","Yeah, let's get something matching.","Alright, I'll get serious!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040112102_01_010");
    MsgDisp("Kazama","Hey - Wait a minute.
Let's just drop that for now.
We can have our normal hangout. Right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040112102_01_020");
    MsgDisp("Kazama","Ooh, nice then.
Get me something other than clothes,
please.");
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
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040112102_01_030");
        MsgDisp("Kazama","Hey, don't take it too seriously.
You can loosen up a bit.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040112102_01_040");
        MsgDisp("Kazama","Seriously?
Please go gentle on me.");
        MsgDisp("主人公","I'll definitely make you happy with it!");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,4);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040112102_01_050");
        MsgDisp("Kazama","I get the weird feeling
I flipped some strange switch on you...");
        ChClose(1);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        ChOpen(1,255,0,0,0,-1,-1,0,0);
        MsgDisp("主人公","Sorry, I just can't decide.
It's difficult to figure out
what you'd want.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040112102_01_060");
        MsgDisp("Kazama","Thank you.");
        MsgDisp("主人公","Huh?");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040112102_01_070");
        MsgDisp("Kazama","To see you thinking so hard
about me, just seeing that is enough.");
        MsgDisp("主人公","Huh?
But I haven't found something yet.");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040112102_01_080");
        MsgDisp("Kazama","I usually look at all kinds of
different things, so even I
don't know what I want.");
        MsgDisp("主人公","I see...");
        ChMotion(1,0);
        Wait(12,0);
        ChEye(1,0);
        ChMouth(1,3);
        VoicePlay("B040112102_01_090");
        MsgDisp("Kazama","Don't make that face.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,4);
        VoicePlay("B040112102_01_100");
        MsgDisp("Kazama","Thanks to you, I understand a little
better. If it's you choosing, anything is
good.");
        ChMotion(1,0);
        MsgDisp("主人公","（｛風真＊＊｝...）");
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
