BGOpen("ex070",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C31_GORO_A",0.01);
MsgClose();
ChOpen(31,254,0,0,0,-1,-1,0,0);
VoicePlay("D030900200_31_000");
MsgDisp("Goro","Good day～
How is search for rough diamonds going?");
MsgDisp("主人公","Ah, Goro-sensei!
Actually, there's someone I'm interested
in right now but......");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,4);
VoicePlay("D030900200_31_010");
MsgDisp("Goro","Ah, what kind of person?");
MsgDisp("主人公","He's a kind person that always helps those
in trouble. But the only other thing I
know is that his name is \"Kuya\"......");
VoicePlay("D030900200_45_000");
MsgDisp("Shirahane Mayo","Eh, \"Kuya\"?");
VoicePlay("D030900200_41_010");
MsgDisp("Tanaka Shin","That \"Kuya\" you're talking about
is probably Mayo-senpai's......");
SEPlay("EV_SE_GAYA_024",0,0.9);
Wait(60,1);
MsgDisp("主人公","(The editorial department is all
riled up......
I wonder why?)");
SEWait();
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,2);
VoicePlay("D030900200_31_020");
MsgDisp("Goro","......Just like I thought.");
MsgDisp("主人公","Eh?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D030900200_31_030");
MsgDisp("Goro","You're doing a great job.
You thought that person was amazing,
huh?");
MsgDisp("主人公","Yes!");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,0);
VoicePlay("D030900200_31_040");
MsgDisp("Goro","I'll give you a hint for a reunion,
then.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("D030900200_31_050");
MsgDisp("Goro","Firstly!　Continue getting interviews.
Secondly, be sure to keep an eye on
trends and what's in \"style\". Bye～▼");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(31);
MsgDisp("主人公","(I see.
If I want to get an interview with him,
I need to keep up with what's in \"style\".)");
MsgSel("Let's do it！","It's fine afterall……");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(Yeah, let's continue looking
around. Maybe I'll see him if I go there 
again. He said he was \"working\", right?)");
    break ;
    case 1:
    MsgDisp("主人公","(Yeah, that's enough.
I don't think I'll see him again......)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
