BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoicePlay("I550500000_05_000");
    MsgDisp("Hiiragi","Excuse me.");
    MsgDisp("主人公","Welcome!
Ah, ｛柊＊＊＊｝.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    ChCheek(5,5);
    VoicePlay("I550500000_05_010");
    MsgDisp("Hiiragi","Hello.
I had received some delicious karinto
manju from this store as a gift...");
    VoicePlay("I550500000_05_020");
    MsgDisp("Hiiragi","Would it happen to still be in stock?");
    MsgDisp("主人公","Yes, so you'll be taking it home.
How many would you like?");
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("I550500000_05_030");
    MsgDisp("Hiiragi","30?");
    MsgDisp("主人公","30∋");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,5);
    ChEyeOpenLevel(5,#1);
    ChCheek(5,7);
    VoicePlay("I550500000_05_040");
    MsgDisp("Hiiragi","Ah, I will be getting portions for the
theater company staff as well.
Not all of it is for myself.");
    MsgDisp("主人公","Hehe. Yes, of course. You won't be able to
finish all that on your own.");
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,0);
    ChCheek(5,5);
    VoicePlay("I550500000_05_050");
    MsgDisp("Hiiragi","Oh, is that so?
Then, I'll take 20.");
    MsgDisp("主人公","Oh, ah, okay.");
    ChMouth(5,4);
    ChMotion(5,0);
    SEPlay("EV_SE_043");
    SEWait();
    ChEye(5,4);
    VoicePlay("I550500000_05_060");
    MsgDisp("Hiiragi","I am looking forward to getting back.
Excuse me.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝, so you're going to be eating
it all by yourself...)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I550500000_05_070");
    MsgDisp("Hiiragi","｛主人公｝, hello there.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Welcome!");
    VoicePlay("I550500000_05_080");
    MsgDisp("Hiiragi","I think that I will be eating in-store,
today.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("I550500000_05_090");
    MsgDisp("Hiiragi","Your famous karinto manju, and...
Do you have any other interesting
recommendations?");
    MsgDisp("主人公","Interesting... ah, how about chocolate
fugashi?");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("I550500000_05_100");
    MsgDisp("Hiiragi","And just what is that irresistable snack?
It is as though I can already feel its
deliciousness in my mouth.");
    MsgDisp("主人公","Hehe.
I'll bring it to your seat, so please wait
a little.");
    MsgClose();
    ScrFadeOut(0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    ChCheek(5,7);
    ScrFadeIn(0);
    VoicePlay("I550500000_05_110");
    MsgDisp("Hiiragi","Haa...
The karinto manju has been surpassed.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, how was it?");
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("I550500000_05_120");
    MsgDisp("Hiiragi","The chocolate seeped into the layers of
the fugashi and hardened there.
I'll take 20 to go.");
    MsgDisp("主人公","Thank you for your continued patronage!");
    MsgDisp("主人公","(It looks like ｛柊＊＊＊｝
really liked my recommendation ♪)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Alright, it's almost closing time.)");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoicePlay("I550500000_05_130");
    MsgDisp("Hiiragi","Excuse me.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, sorry.
It's closing time, so there's not much
left.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("I550500000_05_140");
    MsgDisp("Hiiragi","That is fine.
Today's goal is neither karinto manju nor
chocolate fugashi.");
    MsgDisp("主人公","Really?");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("I550500000_05_150");
    MsgDisp("Hiiragi","Indeed. I had wanted to head home with
you. My rehearsal just finished a few
minutes ago.");
    ChEye(5,4);
    ChMouth(5,2);
    VoicePlay("I550500000_05_160");
    MsgDisp("Hiiragi","Perhaps, you simply think that I frequent
here simply due to a love for Japanese
confections?");
    MsgDisp("主人公","Um... don't you?");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("I550500000_05_170");
    MsgDisp("Hiiragi","Haa... this is bad.
Let us talk at length about this on our
way back.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(Bad?
I wonder if I said something wrong...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
