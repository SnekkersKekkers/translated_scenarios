BGOpen("tr510",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040324102_03_000");
MsgDisp("Honda","There's homemade sausages being sold as
souvenirs.");
MsgSel("It's be nice if there were herbs in it","Looks like they have samples too!","I have a little bit of mixed feelings about this...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040324102_03_010");
    MsgDisp("Honda","I seeー.
I'm not really good with herbsー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040324102_03_020");
    MsgDisp("Honda","Yep yep, seems like they have lots of
novelty sausages.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040324102_03_030");
        MsgDisp("Honda","Is that so?
I don't really get sentimental like
thatー.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040324102_03_031")MsgDisp("Honda","A long time ago when I came to a farm with
my family, my sister said the same thing
as you.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040324102_03_040");
        MsgDisp("Honda","Apparently I didn't really worry about it,
and I kept eating happily.");
        MsgDisp("主人公","Hehe is that so.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("B040324102_03_050");
        MsgDisp("Honda","Right right, and at that time, my Mom not
only praised my sister's kindness, but my
attitude.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040324102_03_060");
        MsgDisp("Honda","\"It's really important to enjoy your meal
properly!\"
She said.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040324102_03_070");
        MsgDisp("Honda","I was happily enjoying it because it was
tastier than the sausages we normally ate.");
        MsgDisp("主人公","Hehe.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040324102_03_080");
        MsgDisp("Honda","I think it's much better to be able to
express the emotions you feel in the
moment, like my sister and you, than to
come off as cold.");
        MsgDisp("主人公","｛本多＊＊｝ isn't cold?
He's kind, and always amuses everyone.");
        ChEye(3,4);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040324102_03_090");
        MsgDisp("Honda","Ehh∋
...Does that \"everyone\" include you?");
        MsgDisp("主人公","Of course!");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040324102_03_100");
        MsgDisp("Honda","Yay!");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040324102_03_110");
        MsgDisp("Honda","Then, I have a favour to ask.");
        MsgDisp("主人公","What is it?");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040324102_03_120");
        MsgDisp("Honda","I want a kind person like you to keep
checking over my words and actions from
now on. How about it?");
        MsgDisp("主人公","Hehe, understood.");
        ChSet(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040324102_03_130");
        MsgDisp("Honda","Okay, then let's go eat some freshly made
sausages at once!");
        MsgClose();
        SEPlay("EV_SE_765");
        ChClose(3);
        SEWait();
        MsgDisp("主人公","(Homemade sausages from a farm...
Maybe I have complicated feelings after
all...)");
        MsgClose();
        ScrFadeOut(0);
        ChOpen(3,255,0,0,0,#1,#1,0,0);
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
