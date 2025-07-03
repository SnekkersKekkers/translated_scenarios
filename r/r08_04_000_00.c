MsgClose();
BGOpen("sc771",2);
ChLayout(1);
ChNanaType(0);
ChOpen(4,34,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("R080400000_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
ChMotion(4,1);
VoicePlay("R080400000_04_010");
MsgDisp("Nanatsumori","Can we go to the
balcony and talk for a bit?");
MsgDisp("主人公","Yeah.
What do you want to talk about?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
VoicePlay("R080400000_04_020");
MsgDisp("Nanatsumori","We've only got a few days of
school left. So I want to show you
a little bit of myself.");
MsgDisp("主人公","｛七ツ森＊｝, yourself?
I thought I knew a lot about you...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1);
VoicePlay("R080400000_04_030");
MsgDisp("Nanatsumori","You still have a long way to go.");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(4);
Wait(40,1);
EnvAutoSet(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_04_16");
StlEye(4,0);
StlMouth(4,0);
BGMPlay("BGM_XMAS_TRHEE",0.01);
EnvPlay("SE_ENV_BG_SC771_CO2",3,0.6);
ScrFadeIn(0);
VoicePlay("R080400000_04_040");
MsgDisp("Nanatsumori","... Look over there.
Those city lights glowing in the distance.
That is where I was born.");
MsgDisp("主人公","Yeah, I believe you lived 
in the city next to here, 
｛七ツ森＊｝.");
StlEye(4,1);
StlMouth(4,0);
VoicePlay("R080400000_04_050");
MsgDisp("Nanatsumori","Yeah. I came to Habataki City to
work as a model. That's why I
went to Habataki High.");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("R080400000_04_060");
MsgDisp("Nanatsumori","Until my last year of middle school...
there was Nanatsumori Minoru, an idiot who
loved the internet and not reality.");
MsgDisp("主人公","An idiot?");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("R080400000_04_070");
MsgDisp("Nanatsumori","I get happy and sad when I upload a
picture of my disguise and I gain fans.
But I just hide it at school.");
MsgDisp("主人公","Why did you hide that at school?");
StlEye(4,1);
StlMouth(4,0);
VoicePlay("R080400000_04_080");
MsgDisp("Nanatsumori","Well, because I was crossdressing.");
MsgDisp("主人公","I see.");
StlEye(4,1,0);
StlMouth(4,0);
StlMouthOpenLevel(4,0,1);
VoicePlay("R080400000_04_090");
MsgDisp("Nanatsumori","…………");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("R080400000_04_100");
MsgDisp("Nanatsumori","You really are strange.");
MsgDisp("主人公","Huh?");
StlEye(4,1,0);
StlMouth(4,1);
StlEyeOpenLevel(4,5,1);
VoicePlay("R080400000_04_110");
MsgDisp("Nanatsumori","It's weird. Normally people don't answer
with 'I see' to that.");
StlEye(4,1,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("R080400000_04_120");
MsgDisp("Nanatsumori","It's always like this...
You always stick to me everywhere,
and you prove my common sence wrong.");
MsgDisp("主人公","Umm...
Well, I'm sorry?");
StlEye(4,2);
StlMouth(4,1);
VoicePlay("R080400000_04_130");
MsgDisp("Nanatsumori","That, that's what I mean.");
VoicePlay("R080400000_04_140");
MsgDisp("Nanatsumori","Dense in a way, what you say 
goes beyond my patterns of expectations.
I must say, at times, it was irritating.");
MsgDisp("主人公","Uh...");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("R080400000_04_150");
MsgDisp("Nanatsumori","It's a compliment. You were always like
that by my side, so I'm no longer the
stupid Nanatsumori Minoru.");
StlEye(4,1,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("R080400000_04_160");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","So I always wanted to thank you properly.
... Thank you, ｛主人公｝.");
MsgDisp("主人公","｛七ツ森＊｝……");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("R080400000_04_170");
MsgDisp("Nanatsumori","So, once again.
Merry Christmas. 
I hope to see you for always.");
MsgDisp("主人公","Yeah.
Merry Christmas, ｛七ツ森＊｝.");
StlEye(4,2);
BGMStop(3);
MsgClose();
ScrFadeOut(0);
StlClose();
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(And just like that, my last Christmas
as a high schooler is over...)");
EnvAutoSet(1);
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(4,0);
