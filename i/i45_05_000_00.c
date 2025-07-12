BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("I450500000_05_000");
    MsgDisp("Hiiragi?","Excuse me, madam.");
    MsgDisp("主人公","Yes!");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,2,2,8,#1,0,0);
    VoicePlay("I450500000_05_010");
    MsgDisp("Hiiragi","......Oh my? Why are you...... are we back
at the school?");
    MsgDisp("主人公","Huh?
This is flower shop Annallee.
｛柊＊＊＊｝, what is it?");
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,#1);
    VoicePlay("I450500000_05_020");
    MsgDisp("Hiiragi","Hm?
Ah, aah. I understand.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    ChEyeOpenLevel(5,9);
    VoicePlay("I450500000_05_030");
    MsgDisp("Hiiragi","I've come to arrange for celebratory
flowers.
Here is the delivery slip.");
    SEPlay("EV_SE_662");
    SEWait();
    MsgDisp("主人公","Understood.");
    ChEye(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("I450500000_05_040");
    MsgDisp("Hiiragi","I will leave it in your hands.
Well then......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    VoicePlay("I450500000_05_050");
    MsgDisp("Hiiragi","Haa......");
    MsgDisp("主人公","(I wonder if ｛柊＊＊＊｝ is okay?
His work seems tough......)");
    break ;
    case 3:
    MsgDisp("主人公","Welcome.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_B",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoicePlay("I450500000_05_060");
    MsgDisp("Hiiragi","Excuse me.
You're working quite hard?");
    MsgDisp("主人公","Yes, hello.
Are you working too, ｛柊＊＊＊｝?");
    VoicePlay("I450500000_05_070");
    MsgDisp("Hiiragi","No, I'm merely running errands.
Is the mini bouquet I had requested
for a gift ready?");
    MsgDisp("主人公","Yeah, it's right there.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("I450500000_05_080");
    MsgDisp("Hiiragi","Yes, it's beautiful.
......Is this perhaps your work?");
    MsgDisp("主人公","No, I just helped.");
    ChMotion(5,0);
    VoicePlay("I450500000_05_090");
    MsgDisp("Hiiragi","Even if so, the fact that your hands
were involved remains unchanged.");
    ChEye(5,0);
    VoicePlay("I450500000_05_100");
    MsgDisp("Hiiragi","I can see the smiles on the faces
of your customers as you deliver these
already. Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(I did it,
｛柊＊＊＊｝ praised me!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_B",0.01);
    ChOpen(5,255,0,4,4,#1,#1,0,0);
    VoicePlay("I450500000_05_110");
    MsgDisp("Hiiragi","Good evening.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Welcome.");
    VoicePlay("I450500000_05_120");
    MsgDisp("Hiiragi","I had some free time today,
and as such I have come to see the
beautiful flowers.");
    MsgDisp("主人公","You can buy them too, rather
than just look at them, you know?");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("I450500000_05_130");
    MsgDisp("Hiiragi","Haha, you said it.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("I450500000_05_140");
    MsgDisp("Hiiragi","In that case, I'd like to request
a flower arrangement for a table,
with flowers of your choice.");
    MsgDisp("主人公","Hehe, gladly!");
    MsgClose();
    ScrFadeOut(0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ScrFadeIn(0);
    SEPlay("EV_SE_535",0.2);
    SEWait();
    MsgDisp("主人公","Thank you for waiting.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("I450500000_05_150");
    MsgDisp("Hiiragi","This is exquisite......
As I'd expect from you.");
    ChMotion(5,0);
    Wait(20,0);
    ChEye(5,0);
    ChMouth(5,4);
    VoicePlay("I450500000_05_160");
    MsgDisp("Hiiragi","The price?");
    MsgDisp("主人公","It'll come to 5 Rich.");
    SEPlay("EV_SE_043");
    SEWait();
    MsgDisp("主人公","Thank you very much.");
    ChEye(5,4);
    VoicePlay("I450500000_05_170");
    MsgDisp("Hiiragi","Thank you as well.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
You forgot your flowers!");
    VoicePlay("I450500000_05_180");
    MsgDisp("Hiiragi","It is a present for you and
the store. Please display it anywhere
you'd like.");
    MsgDisp("主人公","Huh∋
Th-Thank you!");
    MsgDisp("主人公","(｛柊＊＊＊｝......
Yeah, let's display it with care!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
