BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew, it's finally break time.)");
MsgDisp("主人公","(......Huh? That person over there with
their head down on the desk......)");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_22_01");
StlEye(22,0);
StlEyeOpenLevel(22,0,1);
StlMouth(22,0);
BGMPlay("BGM_C23_HIKARU_MICHIRU",0.01,0.9);
ScrFadeIn(0);
MsgDisp("主人公","｛ひかる＊｝.
What's wrong?
You don't look well......");
StlEye(22,1);
VoicePlay("D012200000_22_000");
MsgDisp("Hikaru","Ah......
It's Mari.");
MsgDisp("主人公","You look kind of different from usual.");
StlEye(22,0);
VoicePlay("D012200000_22_010");
MsgDisp("Hikaru","Sigh......
Is Mari also going to tell Hikaru to cheer
up?");
MsgDisp("主人公","Eh?");
StlEye(22,1);
StlMouth(22,1);
VoicePlay("D012200000_22_020");
MsgDisp("Hikaru","Ah......Sorry. That sounds like Hikaru is
taking out her anger on you.");
StlEyeOpenLevel(22,5,1);
VoicePlay("D012200000_22_030");
MsgDisp("Hikaru","Hikaru's fine.
Her switch is just turned off right now.");
StlEye(22,0);
StlMouth(22,0);
VoicePlay("D012200000_22_040");
MsgDisp("Hikaru","......Just like everyone else, Hikaru also
has those days when she's tired.");
StlEyeOpenLevel(22,0);
VoicePlay("D012200000_22_050");
MsgDisp("Hikaru","Always running around like an energetic
idiot, that's just part of the
character......");
StlEye(22,1);
StlMouth(22,1);
VoicePlay("D012200000_22_060");
MsgDisp("Hikaru","Because when you're not happy and well,
the people around you will begin to worry,
just like Mari does, right?");
MsgDisp("主人公","Ah......");
StlEyeOpenLevel(22,5,1);
VoicePlay("D012200000_22_070");
MsgDisp("Hikaru","That's why Hikaru tries to be the
\"Cheerful Hikaru\" in front of others
but......");
StlEye(22,0);
StlMouth(22,0);
VoicePlay("D012200000_22_080");
MsgDisp("Hikaru","Hikaru is also just a normal girl.
Just like Mari and everyone else.");
MsgDisp("主人公","｛ひかる＊｝......");
StlEye(22,1);
StlMouth(22,1);
VoicePlay("D012200000_22_090");
MsgDisp("Hikaru","Don't give Hikaru that look.
You might turn Hikaru's switch back on.");
MsgDisp("主人公","Ah......
Hehe!");
StlEye(22,0,0);
StlEyeOpenLevel(22,0,1);
StlMouth(22,1);
VoicePlay("D012200000_22_100");
MsgDisp("Hikaru","Just for a bit...... let it stay off.
Sorry......
Mari.");
MsgDisp("主人公","It's fine.
Good night,
｛ひかる＊｝.");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(A normal girl, huh......
｛ひかる＊｝ is a
celebrity but I guess sometimes during
school she wants to be free of that.)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(22,1);
