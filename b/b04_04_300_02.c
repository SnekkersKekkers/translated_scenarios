BGOpen("bh410",0);
ChLayout(1);
MsgClose();
ChNanaType(-1);
ChOpen(4,255,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
VoicePlay("B040430002_04_000");
MsgDisp("Nanatsumori","Ah... so you're over there.
This is a nice angle.");
MsgSel("Is it okay for me to be here?","What are you imagining?","Then, let's move!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040430002_04_010");
    MsgDisp("Nanatsumori","Yeah.
You firt perfectly into the empty 
space that felt lonely 
when I was by myself.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040430002_04_020");
    MsgDisp("Nanatsumori","Hm...
Well, don't worry about it.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040430002_04_030");
        MsgDisp("Nanatsumori","Haa...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040430002_04_040");
        MsgDisp("Nanatsumori","…………");
        MsgDisp("主人公","Hehe!");
        ChEye(4,0);
        ChMouth(4,3);
        VoicePlay("B040430002_04_050");
        MsgDisp("Nanatsumori","It's nice.
The fact that you're here feels nice.");
        MsgDisp("主人公","I see.
Hey, you say that it \"feels nice\"
But what feeling is that?");
        ChMotion(4,2,1);
        VoicePlay("B040430002_04_060");
        MsgDisp("Nanatsumori","Like living together 
with my girlfriend——");
        MsgDisp("主人公","Eh?");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,0,1);
        ChCheek(4,8);
        VoicePlay("B040430002_04_070");
        MsgDisp("Nanatsumori","...No!
Please wait a second.
I was too direct just now.");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,1,1);
        ChCheek(4,5);
        VoicePlay("B040430002_04_080");
        MsgDisp("Nanatsumori","Sorry.
Please don't be on guard.");
        MsgDisp("主人公","Yeah.
Because I believe in ｛七ツ森＊｝.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040430002_04_090");
        MsgDisp("Nanatsumori","...Thank you.");
        ChEye(4,0);
        ChMouth(4,0);
        VoiceEVSPlay(4);
        VoicePlay("B040430002_04_100");
        MsgDisp("Nanatsumori","｛主人公｝.
Now... please listen to what
I realy mean.");
        MsgDisp("主人公","Yeah.");
        ChMotion(4,1,1);
        VoicePlay("B040430002_04_110");
        MsgDisp("Nanatsumori","Packed inside this little room, are many
things that are important to me.");
        ChEye(4,4);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040430002_04_120");
        MsgDisp("Nanatsumori","Amongst it all, there's been 
another important thing added.
It might just be the most important
thing of all");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0);
        VoicePlay("B040430002_04_130");
        MsgDisp("Nanatsumori","That's why I think, \"I want to continue
to cherish it forever.\"");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        ChCheek(4,8);
        VoicePlay("B040430002_04_140");
        MsgDisp("Nanatsumori","...I would be happy if you 
could understand this feeling.");
        MsgDisp("主人公","(｛七ツ森＊｝...)");
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
