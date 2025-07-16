BGOpen("sc500",0);
ScrFadeIn(0);
MsgDisp("主人公","(......Oh yeah. It's been a while since
I've visited the Track and Field club.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("sc601",0);
ScrFadeIn(0);
VoicePlay("D010200800_33_000");
MsgDisp("Member","Last lap～!");
VoicePlay("D010200800_38_000");
MsgDisp("Members","Yeah!");
MsgDisp("主人公","(Everyone's working hard......Huh? Over
there, is that ｛颯砂＊＊｝......? )");
SEPlay("EV_SE_626");
MsgClose();
ScrFadeOut(0);
SEWait();
BGMPlay("BGM_C02_SASSA_C",0.01);
StlOpen("ev_02_12");
StlEye(2,1);
StlMouth(2,0);
StlEyeOpenLevel(2,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝, what's up?");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200800_02_000");
MsgDisp("Sassa","Ah......
I was just thinking about you.");
MsgDisp("主人公","Huh?");
StlEye(2,1);
StlMouth(2,0);
StlEyeOpenLevel(2,5);
VoicePlay("D010200800_02_010");
MsgDisp("Sassa","......I was able to end my high school
sport's career in success.");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200800_02_020");
MsgDisp("Sassa","It's all thanks to you.");
MsgDisp("主人公","No, it was a result of all your hard work,
｛颯砂＊＊｝.");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200800_02_030");
MsgDisp("Sassa","By \"hard work\", do you mean all the
training I did?
Because, you know.");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200800_02_040");
MsgDisp("Sassa","Working hard is easy for me.");
MsgDisp("主人公","Eh......");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200800_02_050");
MsgDisp("Sassa","It was all the club members, seniors,
Mikage-sensei, and you who created a place
where I could work hard.");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200800_02_060");
MsgDisp("Sassa","But you know, that's unfair, isn't it?");
MsgDisp("主人公","Why......?");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200800_02_070");
MsgDisp("Sassa","I'm completely burned out when it comes to
training for my next goal.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5);
VoicePlay("D010200800_02_080");
MsgDisp("Sassa","...... And you?
What about you, you made this happen for
me, so what about you?");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
VoicePlay("D010200800_02_090");
MsgDisp("Sassa","Ok");
SEPlay("EV_SE_050",0,0.9);
SEWait();
Wait(15,0);
SEPlay("EV_SE_625");
MsgClose();
SEWait();
ChOpen(2,254,0,2,0,#1,#1,0,0);
VoicePlay("D010200800_02_100");
MsgDisp("Sassa","I'm really such an idiot.
I didn't think about you at all.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
ChEyeOpenLevel(2,0);
VoicePlay("D010200800_02_110");
MsgDisp("Sassa","I didn't realize until I retired......
You have goals and dreams too.");
ChEyeOpenLevel(2,10);
MsgDisp("主人公","It's thanks to ｛颯砂＊＊｝ that
I got to experience so many new things.
Things I would never have done on my own.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("D010200800_02_120");
MsgDisp("Sassa","You......");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("D010200800_02_130");
MsgDisp("Sassa","Do you really think that......");
MsgDisp("主人公","Of course I do.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("D010200800_02_140");
MsgDisp("Sassa","Sigh, that's no good.
I'm just taking advantage of you like
this!");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,5);
ChEyeOpenLevel(2,0);
VoicePlay("D010200800_02_150");
MsgDisp("Sassa","Ugh......
My head's a mess.
I'm going to run until my legs fall off!");
ChEyeOpenLevel(2,10);
BGMStop();
MsgClose();
SEPlay("EV_SE_672");
MsgClose();
ChClose(2);
VoicePlay("D010200800_02_160");
MsgDisp("Sassa","Sorry everyone!
I need to borrow the field again!");
VoicePlay("D010200800_33_020");
MsgDisp("Member","Sassa-senpai, it's no problem!");
VoicePlay("D010200800_44_000");
MsgDisp("Member","Senpai, please take a look at our form.");
MsgDisp("主人公","(｛颯砂＊＊｝......
He worked hard carrying everyone's hopes
and dreams......)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(2,0);
