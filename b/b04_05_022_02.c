BGOpen("wf221",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040502202_05_000");
MsgDisp("Hiiragi","I's like to go overseas, not just cruise
around Habataki bay.");
MsgSel("Alright, let's go!","A trip on a luxury cruise liner would be wonderful","Will you be alright with seasickness?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502202_05_010");
    MsgDisp("Hiiragi","Sounds good.
When you say it, it sounds as if it could
simply be reality, and it gets me excited.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040502202_05_020");
    MsgDisp("Hiiragi","I see...
If Theatre Troupe Habataki performed on a
ship, I guess we could go there for work?");
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
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040502202_05_030");
        MsgDisp("Hiiragi","Haa... that is precisely the problem.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040502202_05_040");
        MsgDisp("Hiiragi","I wonder.
As I've never been on a boat for a
prolonged trip.");
        ChMotion(5,4);
        VoicePlay("B040502202_05_050");
        MsgDisp("Hiiragi","Before coming to Habataki City, I traveled
all over the country, but it wasn't on a
sea voyage.");
        MsgDisp("主人公","I see.
｛柊＊＊＊｝ is accustomed to travelling.");
        ChEye(5,0);
        ChMotion(5,0);
        VoicePlay("B040502202_05_060");
        MsgDisp("Hiiragi","Ah, just now you made a little bit of a
jealous face, correct?");
        MsgDisp("主人公","Yeah, but I think it must've been
difficult...");
        ChEye(5,3);
        VoicePlay("B040502202_05_070");
        MsgDisp("Hiiragi","You're an honest person.
I experienced the cultures of lots of
different areas, and that was fun.");
        ChEye(5,2);
        ChMotion(5,2);
        VoicePlay("B040502202_05_080");
        MsgDisp("Hiiragi","But, it would be more difficult on a small
child right?");
        MsgDisp("主人公","That's right.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040502202_05_090");
        MsgDisp("Hiiragi","Now I'm able to attend Haba High
full-time.
There's nothing that makes me happier.");
        ChMotion(5,4);
        VoicePlay("B040502202_05_100");
        MsgDisp("Hiiragi","Still, it seems that I'm greedy.");
        MsgDisp("主人公","Huh?");
        ChEye(5,2);
        ChMotion(5,0);
        ChEyeOpenLevel(5,9);
        VoicePlay("B040502202_05_110");
        MsgDisp("Hiiragi","After hearing you say that, I kind of miss
the life of travel.");
        MsgDisp("主人公","(｛柊＊＊＊｝...)");
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
