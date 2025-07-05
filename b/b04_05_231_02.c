BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,4,3,3,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523102_05_000");
MsgDisp("Hiiragi","When you look at it from 
here, it's that high...
It's like jumping in the sky.");
MsgSel("That's terrifying.","If it was at night, it'd be a milkyway railroad.","Do you like roller coasters a lot?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040523102_05_010");
    MsgDisp("Hiiragi","Fuu, that's definitely true.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040523102_05_020");
    MsgDisp("Hiiragi","Incredible.
A night-sky trip with you on a 
rollercoaster...I'm free anytime.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,5);
        VoicePlay("B040523102_05_030");
        MsgDisp("Hiiragi","Ah, 
There are lots of other things too.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,4);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040523102_05_040");
        MsgDisp("Hiiragi","Pfft.");
        MsgDisp("主人公","Hm?
What's wrong?");
        ChEye(5,0);
        ChMotion(5,0);
        ChEyeOpenLevel(5,-1);
        VoicePlay("B040523102_05_050");
        MsgDisp("Hiiragi","Sorry.
I remember being told 
that a long time ago.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040523102_05_060");
        MsgDisp("Hiiragi","I forgot what city it was in, 
But long ago, my parents took
me to an amusement park.");
        MsgDisp("主人公","That's a wonderful memory.");
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040523102_05_070");
        MsgDisp("Hiiragi","Yes, it was fun.
I was like a normal kid again.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040523102_05_080");
        MsgDisp("Hiiragi","So I got all excited and 
rode the rollercoaster for ages.");
        MsgDisp("主人公","Hehe, you've liked it for ages huh?");
        VoicePlay("B040523102_05_090");
        MsgDisp("Hiiragi","Yes.
I wonder why?");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,2);
        VoicePlay("B040523102_05_100");
        MsgDisp("Hiiragi","I guess it was unusual for me.
My mother also forced herself
to come along, ");
        MsgDisp("主人公","It must have been tough for your Mom.
But, I think she was happy.");
        ChEye(5,4);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040523102_05_110");
        MsgDisp("Hiiragi","If so, that's good.");
        ChMotion(5,0);
        ChEyeOpenLevel(5,-1);
        VoicePlay("B040523102_05_120");
        MsgDisp("Hiiragi","...What about you?");
        MsgDisp("主人公","I'm happy.
Because ｛柊＊＊＊｝ seems happy.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,3);
        VoicePlay("B040523102_05_130");
        MsgDisp("Hiiragi","Thank you. So, one more time? Then I'll
follow wherever you want to go.");
        MsgDisp("主人公","Hehe, yeah.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        MsgClose();
        ChClose(5);
        MsgDisp("主人公","(Since he was a kid, ｛柊＊＊＊｝ couldn't
go to things like amusement parks because
of things like work...)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(5,255,0,0,0,-1,-1,0,0,0,0);
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
