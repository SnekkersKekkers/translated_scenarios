BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,35,0,0,0,-1,-1,0,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Alright, that's done.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600007_06_000");
    MsgDisp("Himuro","Did you change the temperature?");
    MsgDisp("主人公","Yeah.
We have orchids now, right?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("I460600007_06_010");
    MsgDisp("Himuro","Ah, that explains the high
temperature. The high humidity too,
I'm guessing?");
    MsgDisp("主人公","There's nothing set aside to be
dried, so I was thinking of caring for
our more sensitive plants.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600007_06_020");
    MsgDisp("Himuro","Hmm......");
    MsgDisp("主人公","｛氷室＊＊｝?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600007_06_030");
    MsgDisp("Himuro","Just thinking that's expected
of you. You know a lot about flowers.");
    MsgDisp("主人公","You think so?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("I460600007_06_040");
    MsgDisp("Himuro","Our manager also complimented you.
Well, keep it up.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(I'm happy that I'm helpful
to everyone!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
You should put those preserved flowers
further from the fresh ones.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600007_06_050");
    MsgDisp("Himuro","Ah......
To keep them away from the high
temperatures and humidity, huh.");
    MsgDisp("主人公","Right.
They last longer if they're not in
direct sun, too.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("I460600007_06_060");
    MsgDisp("Himuro","Got it.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600007_06_070");
    MsgDisp("Himuro","…………");
    MsgDisp("主人公","What is it?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600007_06_080");
    MsgDisp("Himuro","Nothing...... Just thinking that even
though I've been here longer than you,
I'm the one being taught.");
    MsgDisp("主人公","Hehe.");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600007_06_090");
    MsgDisp("Himuro","Don't get carried way.
I'll surpass you again soon.");
    MsgDisp("主人公","Sure.");
    MsgDisp("主人公","(I'm so happy to be appreciated
by ｛氷室＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
