BGOpen("wf620",0);
ChLayout(1);
ChNanaType(#1);
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040406302_04_000");
MsgDisp("Nanatsumori","Do you like this place?");
MsgSel("I do!","Hmmm?","What about you, ｛七ツ森＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040406302_04_010");
    MsgDisp("Nanatsumori","I see...
If I'm being honest, I don't like it.
It's cold.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040406302_04_020");
    MsgDisp("Nanatsumori","Eh, you're thinking about it?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040406302_04_030");
        MsgDisp("Nanatsumori","Please answer my question.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040406302_04_040");
        MsgDisp("Nanatsumori","It's cold, there's nothing to see or to
take pictures of. Honestly, I don't
understand what's good about it.");
        MsgDisp("主人公","I see.");
        ChEye(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040406302_04_050");
        MsgDisp("Nanatsumori","...That's it.");
        MsgDisp("主人公","Hm?");
        ChEye(4,0);
        ChMouth(4,4);
        VoicePlay("B040406302_04_060");
        MsgDisp("Nanatsumori","Let's look for the good part of it!");
        MsgDisp("主人公","Ah, sounds good!");
        ChMotion(4,1,1);
        VoicePlay("B040406302_04_070");
        MsgDisp("Nanatsumori","I have an idea though.
Do you want to hear it?");
        MsgDisp("主人公","I do!");
        ChMotion(4,0,1);
        VoicePlay("B040406302_04_080");
        MsgDisp("Nanatsumori","Oshikura manju.");
        MsgDisp("主人公","Are you joking?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040406302_04_090");
        MsgDisp("Nanatsumori","Half joking.
Half serious.");
        MsgDisp("主人公","?");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040406302_04_100");
        MsgDisp("Nanatsumori","We can't do it with just the two of us.
And, it's not warm, is it?");
        ChEye(4,4);
        ChMouth(4,3);
        VoicePlay("B040406302_04_110");
        MsgDisp("Nanatsumori","But, if we
snuggled up like this...");
        MsgClose();
        SEPlay("EV_SE_550");
        ChClose(4,0,30);
        MsgClose();
        ChLayout(0);
        ChNanaType(#1);
        ChOpen(4,255,0,4,3,#1,#1,0,0,0,60);
        VoicePlay("B040406302_04_120");
        MsgDisp("Nanatsumori","...It's warm.
What about you?");
        MsgDisp("主人公","It's warm...
I think?");
        ChEye(4,2);
        ChMouth(4,3);
        VoicePlay("B040406302_04_130");
        MsgDisp("Nanatsumori","Eh, do you need that question mark at the
end?
If it's not enough, then here's more.");
        SEPlay("EV_SE_551");
        SEWait();
        ChEye(4,0);
        ChMouth(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040406302_04_140");
        MsgDisp("Nanatsumori","............");
        MsgDisp("主人公","Yeah, it's warm...");
        ChMouth(4,0);
        ChEyeOpenLevel(4,0);
        VoicePlay("B040406302_04_150");
        MsgDisp("Nanatsumori","Let's stay like
this for a while.");
        MsgDisp("主人公","(｛七ツ森＊｝......)");
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
