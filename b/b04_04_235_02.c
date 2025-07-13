BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040423502_04_000");
MsgDisp("Nanatsumori","There were a lot of disembodied
souls flying around on the graveyard
course, weren't there?");
MsgSel("Eh...?","There were so many of them, that it was pretty well-lit","I was so scared, I didn't look that much...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,0,1);
        VoicePlay("B040423502_04_010");
        MsgDisp("Nanatsumori","W-What's with that reaction...∋
They were there... they were there∋");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040423502_04_020");
        MsgDisp("Nanatsumori","Eh?
What's with that reaction?
They were there.");
        MsgDisp("主人公","There were so many that I couldn't see
them.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040423502_04_030");
        MsgDisp("Nanatsumori","∋
T-They were there. About 100 
of them appeared.");
        MsgDisp("主人公","You're kidding...
Dozens of them?");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,0,1);
        VoicePlay("B040423502_04_040");
        MsgDisp("Nanatsumori","Are you joking...
You're veen trying to scare
me like that——");
        MsgDisp("主人公","............");
        ChEye(4,2);
        ChMouth(4,2);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040423502_04_050");
        MsgDisp("Nanatsumori","............");
        ChMotion(4,2,1);
        ChMouthOpenLevel(4,#1);
        VoicePlay("B040423502_04_060");
        MsgDisp("Nanatsumori","Could it be...
The real thing...");
        MsgDisp("主人公","Ah∈");
        ChEye(4,5);
        ChMouth(4,5);
        ChMotion(4,5,1);
        VoicePlay("B040423502_04_070");
        MsgDisp("Nanatsumori","Waa∋
What's with that all of a sudden!");
        MsgDisp("主人公","There was a pond over there, right?
Maybe it was a reflection on 
the water's surface.");
        ChMouthOpenLevel(4,10);
        VoicePlay("B040423502_04_080");
        MsgDisp("Nanatsumori","...Ah.");
        ChEye(4,1);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040423502_04_090");
        MsgDisp("Nanatsumori","So it was like that.
Those guys are 100 years too 
early to scare me like that.");
        MsgDisp("主人公","(｛七ツ森＊｝ is quite scared, huh...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040423502_04_100");
    MsgDisp("Nanatsumori","For sure.
I could see our feet quite well.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423502_04_110");
    MsgDisp("Nanatsumori","That's a shame.
Then next time I'll hold your hand,
so make sure you get a proper look.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
