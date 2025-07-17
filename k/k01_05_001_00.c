BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Sorry to call you out like this.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A");
    ChOpen(5,254,0,0,0,#1,#1,0,0);
    VoicePlay("K010500100_05_000");
    MsgDisp("Hiiragi","Never mind that.
Well then, what is it?");
    MsgDisp("主人公","｛柊＊＊＊｝, today is your
birthday, right?
Here's a present!");
    SEPlay("EV_SE_664");
    SEWait();
    ChMouth(5,4);
    VoicePlay("K010500100_05_010");
    MsgDisp("Hiiragi","Hm...?
Ah, sorry for the trouble.");
    MsgDisp("主人公","Hey, try opening it?");
    break ;
    case 3:
    MsgDisp("主人公","Sorry to call you out like this.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A");
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("K010500100_05_020");
    MsgDisp("Hiiragi","It's alright.
Did you need something?");
    MsgDisp("主人公","Yes. ｛柊＊＊＊｝, today is your
birthday, right? Here's a present!");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0,1);
    VoicePlay("K010500100_05_030");
    MsgDisp("Hiiragi","Thank you. I get so many gifts, I can't
remember how I should look at times like
these. Can I open it now?");
    MsgDisp("主人公","Of course!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Sorry to call you out like this.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A");
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    VoicePlay("K010500100_05_040");
    MsgDisp("Hiiragi","If you're the one who's calling, I'm
always available.
What is it?");
    MsgDisp("主人公","I wanted to give you a birthday present.
Will you accept it?");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("K010500100_05_050");
    MsgDisp("Hiiragi","Thank you, I'm happy.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChCheek(5,5);
    VoicePlay("K010500100_05_060");
    MsgDisp("Hiiragi","By chance, did it show on my face?");
    MsgDisp("主人公","Hm?");
    ChMotion(5,2);
    VoicePlay("K010500100_05_070");
    MsgDisp("Hiiragi","When I got your call and made my way here,
my hopes were high...");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("K010500100_05_080");
    MsgDisp("Hiiragi","However, I am an actor.
I was desperately holding it back.");
    MsgDisp("主人公","Hehe, it's okay.
You seemed like the usual
｛柊＊＊＊｝.");
    ChEye(5,3);
    ChMotion(5,3);
    ChCheek(5,0);
    VoicePlay("K010500100_05_090");
    MsgDisp("Hiiragi","Then, I did not have to confess?
Again, I thank you.");
    MsgDisp("主人公","Hehe, you're very welcome.
Hey, open it up!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
