BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("I550600000_06_000");
    MsgDisp("Himuro?","Excuse me.");
    MsgDisp("主人公","Yes, welcome.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550600000_06_010");
    MsgDisp("Himuro","5 daifuku and 5 mitarashi dango,
please.");
    MsgDisp("主人公","Very well. ......Wait, ｛氷室＊＊｝∋");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_020");
    MsgDisp("Himuro","What?
Hurry up.");
    MsgDisp("主人公","S-Sure.");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgDisp("主人公","Thank you for waiting.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_030");
    MsgDisp("Himuro","Thanks.");
    MsgDisp("主人公","Are you eating this, ｛氷室＊＊｝?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_040");
    MsgDisp("Himuro","A stupid question.
I can't eat this much.
It's for guests.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_050");
    MsgDisp("Himuro","Bye.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(I guess he was running
an errand......?)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550600000_06_060");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_070");
    MsgDisp("Himuro","What? You look surprised. Am I not allowed
here?");
    MsgDisp("主人公","No way!
Welcome.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_080");
    MsgDisp("Himuro","What do you recommend for this time of
year?");
    MsgDisp("主人公","Our fruit daifuku, I suppose.
It's popular because of the crisp and
tasty seasonal fruit inside.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_090");
    MsgDisp("Himuro","Then, I'll take one.");
    MsgDisp("主人公","Is one enough?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_100");
    MsgDisp("Himuro","How many are you going to
make me eat?");
    MsgDisp("主人公","I see.
I'll get it ready now.");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgDisp("主人公","Thank you for waiting.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I550600000_06_110");
    MsgDisp("Himuro","Thanks.
Well, work hard.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(I guess he's having a snack?
｛氷室＊＊｝ eating Japanese sweets might be
a little surprising......)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550600000_06_120");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝. Welcome.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_130");
    MsgDisp("Himuro","This place is always busy.");
    MsgDisp("主人公","Yes, I'm thankful for that.
But ｛氷室＊＊｝, do you come here that
often?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I550600000_06_140");
    MsgDisp("Himuro","Huh...... no, I was just passing by.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_150");
    MsgDisp("Himuro","More importantly, would you give me your
recommendations?");
    MsgDisp("主人公","Got it!
How many do you need?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_160");
    MsgDisp("Himuro","Enough for four people to snack on over
tea.");
    MsgDisp("主人公","Understood!");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgDisp("主人公","Thank you for waiting.
How are these?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("I550600000_06_170");
    MsgDisp("Himuro","......Yeah.
Good choices.");
    MsgDisp("主人公","Hehe, I'm glad.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("I550600000_06_180");
    MsgDisp("Himuro","The serious expression you had when
choosing was nice, too.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("I550600000_06_190");
    MsgDisp("Himuro","There's no other meaning.
Just means you've gotten good at this.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I550600000_06_200");
    MsgDisp("Himuro","Well, see you.
......Keep up the good work.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(Could it be that ｛氷室＊＊｝ came to cheer
me on?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
