BGOpen("sc501",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Lunch break is almost over...
The next class is PE.)");
VoicePlay("F100240002_02_000");
MsgDisp("Sassa?","I see.
I've never paid much attention to that
sensation.");
VoicePlay("F100240002_06_000");
MsgDisp("Himuro?","I don't know if it's necessary for
athletics, but I heard about a barefoot
marathon runner a long time ago.");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(2,254,3,0,4,#1,#1,0,1);
ChOpen(6,254,0,0,0,#1,#1,0,2);
VoicePlay("F100240002_02_010");
MsgDisp("Sassa","Yo.
Do you have PE next?");
MsgDisp("主人公","Yeah.
What about you two?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100240002_02_020");
MsgDisp("Sassa","I'm just getting some advice from Inori.");
MsgDisp("主人公","Amazing.
Is ｛氷室＊＊｝ really your coach,
｛颯砂＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
VoicePlay("F100240002_06_010");
MsgDisp("Himuro","It's not like that.
I was just saying what I feel.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100240002_02_030");
MsgDisp("Sassa","I promised it was up to me to do what I
want with that opinion.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("F100240002_02_040");
MsgDisp("Sassa","Inori says that when he surfs, he has eyes
on the soles of his feet.
That was great advice.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100240002_06_020");
MsgDisp("Himuro","I just do it with that kind of image in
mind.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100240002_02_050");
MsgDisp("Sassa","That kind of sensation resonates with me
as it comes from someone who's done it
before.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100240002_02_060");
MsgDisp("Sassa","I'll also try treating the feeling I get
from the spikes on my shoe against the
sports ground with care.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("F100240002_06_030");
MsgDisp("Himuro","Yes. You should also come to the beach
sometime, Nozomu-senpai. See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChPosition(2,0);
MsgDisp("主人公","｛氷室＊＊｝, seemed super happy.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("F100240002_02_070");
MsgDisp("Sassa","That's a good thing about him. He's shy
and holds back at first, but ultimately,
he stayed with me until the end.");
ChEye(2,0);
ChEyeOpenLevel(2,10);
MsgDisp("主人公","I see...｛颯砂＊＊｝ and
｛氷室＊＊｝ understands each
other. Amazing...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100240002_02_080");
MsgDisp("Sassa","Well, if it's just us two guys, it's
pretty straightforward, right?");
MsgDisp("主人公","(...
If it's just the two of them?
What does that mean, I wonder...?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
