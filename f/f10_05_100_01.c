BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Now that I think about it...
｛柊＊＊＊｝ was having trouble
studying by himself in the library the
other day.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
Wait(40,0);
BGOpen("sc330",0);
ScrFadeIn(0);
MsgDisp("主人公","(｛柊＊＊＊｝ doesn't seem to be in the
reading area...)");
VoiceEVSPlay(5);
VoicePlay("F100510001_05_000");
MsgDisp("Hiiragi?","｛主人公｝, are you looking for
someone?");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
ChOpen(5,254,0,0,4,#1,#1,0,0);
MsgDisp("主人公","Ah!
Yeah, I was looking for you,
｛柊＊＊＊｝.");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("F100510001_05_010");
MsgDisp("Hiiragi","Do you have matters to discuss with me?
What is it?");
MsgDisp("主人公","No.
I was just wondering if I could study with
you.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100510001_05_020");
MsgDisp("Hiiragi","Is that so?
Thank you.
Absolutely, please do.");
MsgDisp("主人公","Yeah. Yeah. I don't feel motivated when
I'm alone either.");
MsgDisp("主人公","Huh, that's...");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100510001_05_030");
MsgDisp("Hiiragi","Yes, I found it just now.
... A textbook for middle school students.
It seemed just right for me.");
MsgDisp("主人公","Eh?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
ChCheek(5,5);
VoicePlay("F100510001_05_040");
MsgDisp("Hiiragi","It is embarrassing, however, I wasn't able
to attend school very often, especially in
my third year of middle school.");
MsgDisp("主人公","That was before the theatre troupe came to
Habataki City, right?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,0);
VoicePlay("F100510001_05_050");
MsgDisp("Hiiragi","I was able to enroll with the kindness of
the board chairman.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100510001_05_060");
MsgDisp("Hiiragi","I can't be as good as everyone, but I hope
to be a even just a little closer to it.
Shall we start right away?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝ is amazing. even though he's
so busy... I would like to be able to help
out any way that I can.)");
MsgClose();
ScrFadeOut(0,0);
