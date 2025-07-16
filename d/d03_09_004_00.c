BGOpen("wf200",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder if Kuya-san is here today...?)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","I guess we can't run into each other
everytime.
...... Ah!");
MsgDisp("主人公","(Maybe it doesn't work if I don't have any
problems for him to solve∋)");
MsgDisp("主人公","............");
MsgDisp("主人公","Ahh......
Whatever should I do!
I'm so screwed.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C09_KUYA_A",0.01);
ChOpen(9,35,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(9,4,1);
VoicePlay("D030900400_09_000");
MsgDisp("Kuya","Huh?
So we meet again.");
MsgDisp("主人公","I really ran into you......");
ChEye(9,3);
ChMouth(9,2);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
ChMouthOpenLevel(9,0);
VoicePlay("D030900400_09_010");
MsgDisp("Kuya","?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030900400_09_020");
MsgDisp("Kuya","By the way, did you see anyone in trouble
around here?");
MsgDisp("主人公","That was probably me!");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030900400_09_030");
MsgDisp("Kuya","Eh?");
MsgClose();
ChClose(9,0,30);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
MsgClose();
ChOpen(9,35,0,2,4,#1,#1,0,0);
MsgDisp("主人公","Let's get started with the interview.
Thank you very much!");
ChMotion(9,2,1);
VoicePlay("D030900400_09_040");
MsgDisp("Kuya","Hmm.
You can interview me, but I don't think it
will be very interesting......");
MsgDisp("主人公","Hehe.
Okay, here comes the first question: How
did you become a \"Jack Of All Trades\"?");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,0,1);
VoicePlay("D030900400_09_050");
MsgDisp("Kuya","A lot of people need help.");
MsgDisp("主人公","............");
ChMouthOpenLevel(9,0);
VoicePlay("D030900400_09_060");
MsgDisp("Kuya","............");
MsgDisp("主人公","Uhm, is that all?");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900400_09_070");
MsgDisp("Kuya","Yeah.");
MsgDisp("主人公","Okay, here's the second question: Why is
it rewarding to be a \"Jack Of All Trades\"?");
ChEye(9,2);
ChMouth(9,4);
ChMotion(9,0,1);
VoicePlay("D030900400_09_080");
MsgDisp("Kuya","Rewarding?");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,1,1);
VoicePlay("D030900400_09_090");
MsgDisp("Kuya","......I never thought about it like that.
Does there have to be something rewarding
about it? What do you think?");
MsgDisp("主人公","(Umm......
I'm being asked questions instead......)");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900400_09_100");
MsgDisp("Kuya","Hey, I told you, didn't I?
There's no point in interviewing me.");
MsgDisp("主人公","(What should I do......As things are, the
interview is going no where. Maybe I
should follow him around instead?)");
MsgSel("Ask for a close coverage interview","Let's end here");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Understood.
Kuya-san, if you don't mind, maybe we can
do a close coverage interview?");
    ChEye(9,3);
    ChMouth(9,4);
    ChMotion(9,4,1);
    ChEyeOpenLevel(9,10);
    VoicePlay("D030900400_09_110");
    MsgDisp("Kuya","A close coverage interview?
Does that mean we'll be doing this
forever?");
    MsgDisp("主人公","Well......
It's not for forever but next time,
Kuya-san and I can cover more topics.");
    ChEye(9,3);
    ChMouth(9,0);
    ChMotion(9,0,1);
    VoicePlay("D030900400_09_120");
    MsgDisp("Kuya","Like always, I'm okay with anything.
So go ahead.");
    MsgDisp("主人公","Thank you so much!");
    ChMotion(9,4,1);
    VoicePlay("D030900400_09_130");
    MsgDisp("Kuya","No problem. On that note, can you teach me
about what's in \"style\" next time? I'm not
good at that sort of thing.");
    MsgDisp("主人公","(Alright! I'll learn more about Kuya-san
next interview! I need to research what's
in \"style\", too.)");
    break ;
    case 1:
    MsgDisp("主人公","(I'm having a hard time getting to know
Kuya-san......)");
    ChEye(9,3);
    ChMouth(9,4);
    ChMotion(9,4,1);
    ChEyeOpenLevel(9,10);
    VoicePlay("D030900400_09_140");
    MsgDisp("Kuya","You look like you're upset.
Is something troubling you?");
    MsgDisp("主人公","No, it's nothing.
Thanks for your time today.");
    MsgDisp("主人公","(Yeah. I don't think I'll be able to write
an article on Kuya-san, maybe it's best to
give up......)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
