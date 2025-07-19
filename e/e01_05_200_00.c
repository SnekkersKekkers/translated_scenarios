BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well then...
Should I head home now?)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,255,0,0,4,#1,#1,0,1);
ChOpen(6,255,0,0,0,#1,#1,0,2);
ChEye(5,4);
VoiceEVSPlay(5);
VoicePlay("E010520000_05_000");
MsgDisp("Hiiragi","｛主人公｝, nice timing.");
MsgDisp("主人公","Ah, hi, ｛柊＊＊＊｝ and ｛氷室＊＊｝.
What an interesting combination.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010520000_06_000");
MsgDisp("Himuro","Is it really?
We bumped into each other by chance.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010520000_05_010");
MsgDisp("Hiiragi","That's right.
I was getting measured for a suit.");
MsgDisp("主人公","Wow, even the suit is custom made.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("E010520000_05_020");
MsgDisp("Hiiragi","Things like this become necessary
sometimes due to the nature of my job.");
MsgDisp("主人公","Um...
｛氷室＊＊｝ do you have yours custom made
too?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("E010520000_06_010");
MsgDisp("Himuro","No way.
I was just curious.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010520000_05_030");
MsgDisp("Hiiragi","I'd recommend it.
Wearing something that suits your body is
part of the foundations of fashion.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010520000_06_020");
MsgDisp("Himuro","Yanosuke-senpai is right.
It's nice to have clothes that perfectly
fit your body.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010520000_05_040");
MsgDisp("Hiiragi","Yes. It's not quite the same as following
trends, but I feel more comfortable this
way.");
MsgDisp("主人公","Yeah, I think I understand.");
ChEye(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("E010520000_06_030");
MsgDisp("Himuro","...How about mine?");
MsgDisp("主人公","｛氷室＊＊｝'s style is...
Street wear?");
ChMouth(5,2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
ChCheek(6,0);
VoicePlay("E010520000_06_040");
MsgDisp("Himuro","Yanosuke-senpai, let's forget about
earlier.");
ChClose(6);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChPosition(5,0);
Wait(60,0);
MsgDisp("主人公","He left...
｛柊＊＊＊｝, what was that about?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("E010520000_05_050");
MsgDisp("Hiiragi","Right, earlier we talked about swapping
clothes.");
MsgDisp("主人公","(What if ｛柊＊＊＊｝ and ｛氷室＊＊｝
swapped clothes?
That sounds interesting.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
