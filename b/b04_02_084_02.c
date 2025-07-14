BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040208402_02_000");
MsgDisp("Sassa","You could put up a tent around here and go
camping right?");
MsgSel("It might be a bit desolate at night?","Next time I'll bring a bento.","Do you want to catch some fish and eat it?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        VoicePlay("B040208402_02_010");
        MsgDisp("Sassa","I-It'll be alright. No... camping by the
water is a risky situation...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040208402_02_020");
        MsgDisp("Sassa","That's fine.
But I've watched too many horror movies.");
        MsgDisp("主人公","Horror?");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        VoicePlay("B040208402_02_030");
        MsgDisp("Sassa","The ones where young people camp by the
lake.");
        MsgDisp("主人公","Umm... It's a firefly sanctuary, so there
won't be anyone there?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208402_02_040");
        MsgDisp("Sassa","Ah, is that right?");
        MsgDisp("主人公","Hehe, Are you thinking back to the horror
movie?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040208402_02_050");
        MsgDisp("Sassa","I thought it was totally set up like one
of those scenarios.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        VoicePlay("B040208402_02_060");
        MsgDisp("Sassa","I can't win against ghosts, But if it's a
physical fight...
I might stand a chance.");
        MsgDisp("主人公","｛颯砂＊＊｝, what's wrong?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040208402_02_070");
        MsgDisp("Sassa","I was just thinking of how to protect you
from dangerous people. I think the best
thing to do is to carry you on my back and
run.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040208402_02_080");
        MsgDisp("Sassa","Ah, is it also okay to hold you in the
front?");
        MsgDisp("主人公","(Feels like I'm being treated like
luggage...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208402_02_090");
    MsgDisp("Sassa","Yeah, sounds good!
When should we do it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040208402_02_100");
    MsgDisp("Sassa","Yeah, There's fireflies here at least, so
there must be fish here too?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
